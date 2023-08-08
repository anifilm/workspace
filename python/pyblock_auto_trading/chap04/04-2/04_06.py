import requests
from bs4 import BeautifulSoup

url = "https://finance.naver.com/item/main.nhn?code=005930"
html = requests.get(url).text

soup = BeautifulSoup(html, "html5lib")
tags = soup.select(".lwidth tbody .strong td em")

for tag in tags:
    print(tag.text)
