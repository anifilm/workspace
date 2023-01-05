import requests
from bs4 import BeautifulSoup

url = "https://bombyxdrug-xsrvjp.ssl-xserver.jp/bd/index.php/tedf.html"
res = requests.get(url)
res.raise_for_status()

soup = BeautifulSoup(res.text, "lxml")
item_list = soup.find('div', class_="category-products")
items = item_list.find_all('li')

for i in items:
    title = i.find("a")
    price = i.find("span", class_="price")
    stock = i.select_one("p > span")
    if title is None or price is None:
        continue
    print(title.get("title"))
    print(str(price.contents[0]).strip().rjust(60))
    if stock.get_text() != "통상 가격:":
        print("\n" + str(stock.get_text()).rjust(55))
    else:
        print()
    print("-" * 60)
