import webbrowser
import requests
from bs4 import BeautifulSoup

def print_item(title, price):
    if title.find("이노치노하하") != -1:  # 특정 상품 표시안함 (이노치노하하)
        pass
    elif title.find("프로기노바") != -1 or title.find("에스트로") != -1:  # 해당 상품 구매가능한 경우 카카오 메시지 전송
        # print("구매가능!")
        print("\x1b[1;33m" + title + "\x1b[1;m")  # yellow
        print(price.rjust(60))
        print("-" * 60)
    elif title.find("클리마라") != -1:  # 해당 상품 구매가능한 경우 카카오 메시지 전송
        # print("구매가능!")
        print("\x1b[1;96m" + title + "\x1b[1;m")  # blue
        print(price.rjust(60))
        print("-" * 60)
    elif title.find("안드로쿨") != -1:  # 해당 상품 구매가능한 경우 카카오 메시지 전송
        # print("구매가능!")
        print("\x1b[1;31m" + title + "\x1b[1;m")  # red
        print(price.rjust(60))
        print("-" * 60)
        if title.find("시테론") != -1:
            # 시테론 상품 페이지 열기
            webbrowser.open("https://bombyxdrug-xsrvjp.ssl-xserver.jp/bd/index.php/tedf/premon-331.html")
    else:  # 품절이 아닌 경우 금액 출력
        print(title)
        print(price.rjust(60))
        print("-" * 60)

def get_info(url):
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

        if stock is not None:
            stock_str = str(stock.get_text())
            if stock_str.find("통상") == -1:
                # print("\n" + stock_str.rjust(56)) # 재고품절 출력
                pass
            else:
                print_item(title_str, price_str)
        else:
            print_item(title_str, price_str)


url1 = "https://bombyxdrug-xsrvjp.ssl-xserver.jp/bd/index.php/tedf.html?p=1"
url2 = "https://bombyxdrug-xsrvjp.ssl-xserver.jp/bd/index.php/tedf.html?p=2"

print("\n" + "-" * 60)
get_info(url1)
get_info(url2)
