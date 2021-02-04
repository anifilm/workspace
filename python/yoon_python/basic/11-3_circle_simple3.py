""" 11-3 모듈을 가져다 쓰는 방법 2 """

from circle import ar_circle as ac  # circle.py의 ar_circle을 ac라는 이름으로 갖다 쓰겠음
from circle import ci_circle as cc  # circle.py의 ci_circle을 cc라는 이름으로 갖다 쓰겠음

def ar_circle(rad):  # 원의 넓이를 출력
    print("넓이:", rad * rad * 3.14)

def ci_circle(rad):  # 원의 둘레를 출력
    print("둘레:", rad * 2 * 3.14)

def main():
    r = float(input("반지름 입력: "))
    ar_circle(r)  # 위에 있는 함수를 호출
    ci_circle(r)  # 위에 있는 함수를 호출

    sum = ac(r) + cc(r)  # circle.py에 있는 두 함수를 호출
    print("넓이와 둘레의 합:", sum)

main()
