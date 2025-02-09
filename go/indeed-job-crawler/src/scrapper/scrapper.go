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

type Indeed struct {
	id       string
	title    string
	location string
	summary  string
}

func Scrapper(query string) {
	var baseURL string = "https://kr.indeed.com/jobs?q=" + query
	var jobs []Indeed
	c1 := make(chan []Indeed)
	totalPages := getPages(baseURL)
	fmt.Println("TotalPage...", totalPages)

	for i := 0; i < totalPages; i++ {
		go getCard(i, baseURL, c1)
	}

	for i := 0; i < totalPages; i++ {
		extractJob := <-c1
		jobs = append(jobs, extractJob...)
	}

	writeJobs(jobs)
	fmt.Println("Done")
}

func writeJobs(jobs []Indeed) {
	file, err := os.Create("jobs.csv")
	checkErr(err)

	w := csv.NewWriter(file)
	defer w.Flush()

	header := []string{"ID", "TITLE", "LOCATION", "SUMMARY"}

	wErr := w.Write(header)
	checkErr(wErr)

	for _, job := range jobs {
		jobSlice := []string{"https://kr.indeed.com/viewjob?jk=" + job.id, job.title, job.location, job.summary}
		jobErr := w.Write(jobSlice)
		checkErr(jobErr)
	}
}

func getCard(page int, baseURL string, c1 chan []Indeed) {
	var jobs []Indeed
	c := make(chan Indeed)
	URL := baseURL + "&start=" + strconv.Itoa(page+10)
	fmt.Println(URL)

	res, err := http.Get(URL)
	checkErr(err)
	checkCode(res)

	defer res.Body.Close()

	doc, err := goquery.NewDocumentFromReader(res.Body)
	checkErr(err)

	searchCards := doc.Find(".jobsearch-SerpJobCard")

	searchCards.Each(func(i int, s *goquery.Selection) {
		go extractJob(s, c)
	})

	for i := 0; i < searchCards.Length(); i++ {
		job := <-c
		jobs = append(jobs, job)
	}

	c1 <- jobs
}

func extractJob(s *goquery.Selection, c chan<- Indeed) {
	id, _ := s.Attr("data-jk")
	title := CleanString(s.Find(".title>a").Text())
	location := CleanString(s.Find(".accessible-contrast-color-location").Text())
	summary := CleanString(s.Find(".summary").Text())

	c <- Indeed{
		id:       id,
		title:    title,
		location: location,
		summary:  summary,
	}
}

func getPages(baseURL string) int {
	pages := 0
	res, err := http.Get(baseURL)
	checkErr(err)
	checkCode(res)

	defer res.Body.Close()

	doc, err := goquery.NewDocumentFromReader(res.Body)
	checkErr(err)

	doc.Find(".pagination-list").Each(func(i int, s *goquery.Selection) {
		pages = s.Find("li").Length()
	})

	return pages
}

func checkErr(err error) {
	if err != nil {
		log.Fatalln(err)
	}
}

func checkCode(res *http.Response) {
	if res.StatusCode != 200 {
		log.Fatalf("Status code err: %d %s", res.StatusCode, res.Status)
	}
}

func CleanString(str string) string {
	return strings.Join(strings.Fields(strings.TrimSpace(str)), " ")
}
