""" 07-6 True 또는 False를 반환하는 연산들 """

def main():
    num = int(input("2의 배수이면서 3의 배수인 수 입력: "))
    if num % 2 == 0:  # 연산 순서 구분되게 (num % 2) == 0로 입력 가능
        if num % 3 == 0:  # 연산 순서 구분되게 (num % 3) == 0로 입력 가능
            print("OK!")
        else:
            print("NO!")
    else:
        print("NO!")

main()
