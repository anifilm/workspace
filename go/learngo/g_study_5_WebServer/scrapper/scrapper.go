package scrapper

import (
	"encoding/csv"
	"fmt"
	"log"
	"net/http"
	"os"
	"strconv"
	"strings"

	"github.com/PuerkitoBio/goquery"
)

type extractedJob struct {
	id      string
	title   string
	locaton string
	salary  string
	summary string
}

// Scrape indeed by a term
func Scrape(term string) {
	var baseURL string = "https://kr.indeed.com/jobs?q=python&limit=50"
	var jobs []extractedJob
	ch := make(chan []extractedJob)
	totalPages := getPages(baseURL)

	for i := 0; i < totalPages; i++ {
		// extractedJob := getPage(i)
		// jobs = append(jobs, extractedJob...)
		go getPage(i, baseURL, ch)
	}

	for i := 0; i < totalPages; i++ {
		extractedJob := <-ch
		jobs = append(jobs, extractedJob...)
	}

	writeJobs(jobs)
	fmt.Println("Done, extracted", len(jobs))
}

func getPage(page int, url string, mainCH chan<- []extractedJob) {
	var jobs []extractedJob
	ch := make(chan extractedJob)
	pageURL := url + "&start=" + strconv.Itoa(page*50)
	fmt.Println("Requesting", pageURL)
	res, err := http.Get(pageURL)
	checkErr(err)
	checkCode(res)

	defer res.Body.Close()

	doc, err := goquery.NewDocumentFromReader(res.Body)
	checkErr(err)

	searchCards := doc.Find(".jobsearch-SerpJobCard")

	searchCards.Each(func(i int, card *goquery.Selection) {
		// job := extractJob(card)
		// jobs = append(jobs, job)
		go extractJob(card, ch)
	})

	for i := 0; i < searchCards.Length(); i++ {
		job := <-ch
		jobs = append(jobs, job)
	}

	// return jobs
	mainCH <- jobs
}

func extractJob(card *goquery.Selection, ch chan<- extractedJob) {
	id, _ := card.Attr("data-jk")
	title := cleanString(card.Find(".title>a").Text())
	location := cleanString(card.Find(".sjcl").Text())
	salary := cleanString(card.Find(".salaryText").Text())
	summary := cleanString(card.Find(".summary").Text())
	ch <- extractedJob{
		id:      id,
		title:   title,
		locaton: location,
		salary:  salary,
		summary: summary}
}

func cleanString(str string) string {
	return strings.Join(strings.Fields(strings.TrimSpace(str)), " ")
}

func getPages(url string) int {
	pages := 0
	res, err := http.Get(url)
	checkErr(err)
	checkCode(res)

	defer res.Body.Close()

	doc, err := goquery.NewDocumentFromReader(res.Body)
	checkErr(err)

	doc.Find(".pagination").Each(func(i int, s *goquery.Selection) {
		pages = s.Find("a").Length()
	})

	return pages
}

func writeJobs(jobs []extractedJob) {
	file, err := os.Create("./g_study_5_WebServer/jobs.csv")
	checkErr(err)

	w := csv.NewWriter(file)
	defer w.Flush()

	headers := []string{"Link", "Title", "Location", "Salary", "Summary"}

	wErr := w.Write(headers)
	checkErr(wErr)

	for _, job := range jobs {
		jobSlice := []string{"https://kr.indeed.com/viewjob?jk=" + job.id, job.title, job.locaton, job.salary, job.summary}
		jwErr := w.Write(jobSlice)
		checkErr(jwErr)
	}
}

func checkErr(err error) {
	if err != nil {
		log.Fatalln(err)
	}
}

func checkCode(res *http.Response) {
	if res.StatusCode != 200 {
		log.Fatalln("Request failed with Status:", res.StatusCode)
	}
}
