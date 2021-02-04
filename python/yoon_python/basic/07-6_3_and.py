""" 07-6 True 또는 False를 반환하는 연산들 """

def main():
    num = int(input("2의 배수이면서 3의 배수인 수 입력: "))
    if (num % 2) == 0 and (num % 3) == 0:  # num이 2와 3의 배수이면 조건 True
        print("OK!")
    else:
        print("NO!")

main()
