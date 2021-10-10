import requests
import os.path
import pickle
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
    print(".", end="")
    return num_list


def main():
    old_lotto_numbers = []

    if os.path.isfile("./_old_lotto_numbers.db"):
        print("기존 당첨번호를 저장한 파일을 불러옵니다.")
        with open("_old_lotto_numbers.db", "rb") as f:
            old_lotto_numbers = pickle.load(f)
        # 저장된 회차 이후 정보가 더 있다면 가져옴
        old_len = len(old_lotto_numbers) + 1
        i = old_len + 1
        while True:
            old_number = get_lotto_numbers(i)
            if old_number == -1:
                break
            old_lotto_numbers.append(old_number)
            i += 1
        if old_len < len(old_lotto_numbers) + 1:
            with open("_old_lotto_numbers.db", "wb") as f:
                pickle.dump(old_lotto_numbers, f)
            print("추가된 회차 정보를 저장하였습니다.")
    else:
        # 기존 당첨된 로또 번호를 동행복권 사이트에서 크롤링하여 파일로 저장
        print("기존 당첨번호를 저장한 파일을 찾을 수 없습니다.")
        print("서버에서 데이터를 가져옵니다.")
        # 1회차 부터 현재 회차까지의 정보를 가져옴
        i = 1
        while True:
            old_number = get_lotto_numbers(i)
            if old_number == -1:
                break
            old_lotto_numbers.append(old_number)
            i += 1
        print()
        # 크롤링한 결과를 파일로 저장
        with open("_old_lotto_numbers.db", "wb") as f:
            pickle.dump(old_lotto_numbers, f)
        print("기존 당첨번호를 파일로 저장하였습니다.")

    print("\n--- 최근 10회차 당첨결과 ---")
    # 기존 당첨번호 최근 10회차 출력 (확인용)
    s = len(old_lotto_numbers) - 10
    e = len(old_lotto_numbers)
    for i in range(s, e):
        print(f"{s+1}회 {old_lotto_numbers[i]}")
        s += 1
    print()

    # 기존 당첨번호에 해당하지 않는 숫자 조합을 저장
    my_lotto_numbers = []

    while len(my_lotto_numbers) < 5:
        list_of_numbers = list(range(1, 46))
        random.shuffle(list_of_numbers)
        numbers = sorted(list_of_numbers[:6])
        print("번호생성", numbers)

        if numbers not in old_lotto_numbers or numbers not in my_lotto_numbers:
            print("번호저장")
            my_lotto_numbers.append(numbers)

    # 결과를 파일로 저장
    f = open("_my_lotto_numbers.txt", "w")
    for nums in my_lotto_numbers:
        f.write(str(nums) + "\n")
    f.close()
    print("\n로또 번호를 생성하여 파일로 저장하였습니다.")


if __name__ == '__main__':
    main()
