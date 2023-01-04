import requests
from bs4 import BeautifulSoup

url = "https://bombyxdrug-xsrvjp.ssl-xserver.jp/bd/index.php/tedf.html"
res = requests.get(url)
res.raise_for_status()

soup = BeautifulSoup(res.text, "lxml")
item_list = soup.find('ul', attrs={"class": "products-grid"})
items = item_list.find_all('li')

for i in items:
    title = i.find("h2")
    if title is None:
        continue
    price = i.find("span", attrs={"class": "price"})
    stock = i.find("p", attrs={"class": "out-of-stock"})
    print(title, price, stock)
    print("-----------------------------------------------------------")
