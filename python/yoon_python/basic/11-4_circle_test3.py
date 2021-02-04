""" 11-4 as로 모듈의 이름 줄이기 """

import circle as cc  # circle.py 모듈을 cc라는 이름으로 가져다 쓰겠다는 선언!

def main():
    r = float(input("반지름 입력: "))
    ar = cc.ar_circle(r)  # cc라는 이름으로 circle.py의 ar_circle 함수를 호출
    ci = cc.ci_circle(r)  # cc라는 이름으로 circle.py의 ci_circle 함수를 호출
    print("넓이:", ar)
    print("둘레:", ci)

main()
