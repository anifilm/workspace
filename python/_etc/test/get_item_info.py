from dotenv import load_dotenv
import os
import requests
import telegram
import asyncio
from bs4 import BeautifulSoup

load_dotenv()


async def send_message(message="텔레그램 메시지 테스트", send_url="http://example.com"):
    try:
        token = os.environ.get("TelegramToken")
        bot = telegram.Bot(token)
        chat_id_bot1 = "7011657775"
        chat_id_bot2 = "-1002464227122"
        new_message = message + "\n\n" + send_url
        await bot.send_message(chat_id=chat_id_bot1, text=new_message)
    except Exception as ex:
        print(ex)


def send_message_line(message="라인 메시지 테스트"):
    try:
        api_url = "https://notify-api.line.me/api/notify"
        token = os.environ.get("LineToken")

        response = requests.post(
            api_url,
            headers={"Authorization": "Bearer " + token},
            data={"message": message},
        )
    except Exception as ex:
        print(ex)


def print_item(title, price, link):
    if title.find("이노치노하하") != -1:  # 특정 상품 표시안함 (이노치노하하)
        pass
    elif (
        title.find("프로기노바") != -1 or title.find("에스트로") != -1
    ):  # 해당 상품 구매가능한 경우 카카오 메시지 전송
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
        if title.find("안드로쿨") != -1:
            # 메시지 전송
            asyncio.run(send_message("해당 쇼핑몰에서 안드로쿨을 판매하기 시작했습니다.", link))
        if title.find("시테론") != -1:
            # 메시지 전송
            asyncio.run(send_message("해당 쇼핑몰에서 시테론을 판매하기 시작했습니다.", link))
    else:  # 품절이 아닌 경우 금액 출력
        print(title)
        print(price.rjust(60))
        print("-" * 60)


def get_info(url):
    res = requests.get(url)
    res.raise_for_status()

    soup = BeautifulSoup(res.text, "lxml")
    item_list = soup.find("div", class_="category-products")
    items = item_list.find_all("li")

    for i in items:
        title = i.find("a")
        price = i.find("span", class_="price")
        stock = i.select_one("p > span")
        if title is None or price is None:
            continue

        title_str = str(title.get("title"))
        link_str = str(title.get("href"))
        price_str = str(price.contents[0]).strip()[0:-2]

        if stock is not None:
            stock_str = str(stock.get_text())
            if stock_str.find("통상") == -1:
                # print("\n" + stock_str.rjust(56)) # 재고품절 출력
                pass
            else:
                print_item(title_str, price_str, link_str)
        else:
            print_item(title_str, price_str, link_str)


url1 = "https://bombyxdrug-xsrvjp.ssl-xserver.jp/bd/index.php/tedf.html?limit=12&p=1"
url2 = "https://bombyxdrug-xsrvjp.ssl-xserver.jp/bd/index.php/tedf.html?limit=12&p=2"

print("\n" + "-" * 60)
get_info(url1)
get_info(url2)

# Test Send Message
#asyncio.run(send_message())
