import requests
import random

# 지정된 회차의 당첨번호를 크롤링하여 가져옴
def get_lotto_numbers(episode):
    params = {
        "method": "getLottoNumber",
        "drwNo": episode
    }

    request = requests.get("https://www.dhlottery.co.kr/common.do", params=params)
    response = request.json()

    # 정보를 가져올수 없다면 -1을 반환
    if response["returnValue"] == "fail":
        return -1

    num_list = []
    for i in range(1, 7):
        num_list.append(response["drwtNo" + str(i)])

    return num_list


old_number = get_lotto_numbers(1)
print(old_number)
