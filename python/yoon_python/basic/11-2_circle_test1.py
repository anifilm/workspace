""" 11-2 모듈을 가져다 쓰는 방법 1 """

import circle  # circle.py 모듈을 가져다 쓰겠다는 선언!

def main():
    r = float(input("반지름 입력: "))
    ar = circle.ar_circle(r)  # circle.py의 ar_circle 함수를 호출
    ci = circle.ci_circle(r)  # circle.py의 ci_circle 함수를 호출
    print("넓이:", ar)
    print("둘레:", ci)

main()
