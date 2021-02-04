""" 11-3 모듈을 가져다 쓰는 방법 2 """

def ar_circle(rad):  # 원의 넓이를 계산해서 출력
    print("넓이:", rad * rad * 3.14)

def ci_circle(rad):  # 원의 둘레를 계산해서 출력
    print("둘레:", rad * 2 * 3.14)

def main():
    r = float(input("반지름 입력: "))
    ar_circle(r)
    ci_circle(r)

main()
