""" 07-5 if ~ elif ~ else문: 여러 길 중에서 하나의 길만 선택! """

def main():
    num = int(input("정수 입력: "))
    # 조건에 따라서 아래 문장 1, 2, 3 중 하나만 실행이 된다.
    if num > 0:
        print("0보다 큰 수입니다.")  # 문장 1
    elif num < 0:
        print("0보다 작은 수입니다.")  # 문장 2
    else:
        print("0으로 판단이 됩니다.")  # 문장 3

main()
