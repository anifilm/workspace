""" 14-3 보다 적극적인 예외의 처리 """

def main():
    print("안녕하세요.")
    while True:  # while 루프 안에 try ~ except가 있다.
        try:
            age = int(input("나이를 입려하세요: "))
            print("입력하신 나이는 다음과 같습니다:", age)
            break  # 입력이 정상적이면 while 루프 탈출!
        except ValueError:
            print("입력이 잘못되었습니다.")

    print("만나서 반가웠습니다.")

main()
