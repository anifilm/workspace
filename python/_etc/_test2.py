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

    title_str = str(title.get("title"))
    price_str = str(price.contents[0]).strip()[0:-2]
    stock_str = str(stock.get_text())
    print(title_str)
    print(price_str.rjust(60))

    if stock_str.find("통상") == -1:
        print("\n" + stock_str.rjust(56))
    else:
        print("\n")

    # 해당 상품 구매가능한 경우 카카오 메시지 전송
    if title_str.find("안드") != -1 and stock_str.find("품절") == -1:
        print("구매가능!")

    print("-" * 60)
