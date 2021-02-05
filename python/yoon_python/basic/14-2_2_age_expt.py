""" 14-2 예외의 처리 """

def main():
    print("안녕하세요.")
    try:
        age = int(input("나이를 입력하세요: "))
        print("입력하신 나이는 다음과 같습니다:", age)
    except ValueError:
        print("입력이 잘못되었습니다.")

    print("만나서 반가웠습니다.")

main()
