""" 07-8 True 또는 False로 답하는 함수들 """

def main():
    pnum = input("스마트폰 번호 입력: ")
    if pnum.isdigit() and pnum.startswith("010"):
        print("정상적인 입력입니다.")
    else:
        print("정상적이지 않은 입력입니다.")

main()
