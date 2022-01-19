import requests
from bs4 import BeautifulSoup

LIMIT = 50
URL = f"https://www.indeed.com/jobs?q=python&limit={LIMIT}"


def extract_indded_pages():
    result = requests.get(URL)

    html = result.text
    soup = BeautifulSoup(html, "html.parser")

    pagination = soup.find("ul", {"class": "pagination-list"})

    spans = pagination.find_all("span")

    pages = []
    """
    페이지당 50개의 job info
    page=24 -> &start=((page-1) * 50)
    12페이지가 마지막이지만 더 볼 수 있음
    """

    for span in spans[:-2]:
        pages.append(int(span.string))

    max_page = pages[-1]

    return max_page


def extract_indeed_jobs(last_page):
    jobs = []
    for page in range(last_page):
        result = requests.get(f"{URL}&start={page*LIMIT}")
        print(page+1, result.status_code)
    return jobs
