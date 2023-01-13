package main

import (
	"fmt"
	"strings"

	"indeed-job-crawler/src/scrapper"

	"github.com/labstack/echo"
)

const fileName string = "jobs.csv"

func Handler(c echo.Context) error {
	return c.File("./src/home.html")
}

func handleScrape(c echo.Context) error {
	query := strings.ToLower(scrapper.CleanString(c.FormValue("query")))
	fmt.Println(query)
	scrapper.Scrapper(query)

	return c.Attachment(fileName, query+".csv")
}

func main() {
	e := echo.New()
	e.GET("/", Handler)
	e.POST("/scrape", handleScrape)
	e.Logger.Fatal(e.Start(":1323"))
}
