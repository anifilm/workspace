""" 11-2 모듈을 가져다 쓰는 방법 1 """

from circle import ar_circle  # circle.py에서 ar_circle 함수를 가져다 쓰겠다.
from circle import ci_circle  # circle.py에서 ci_circle 함수를 가져다 쓰겠다.
"""
from circle import ar_circle, ci_cirlce 과 같이 사용할 수도 있다.
"""

def main():
    r = float(input("반지름 입력: "))
    ar = ar_circle(r)  # 모듈 이름 없이 함수 호출 가능!
    ci = ci_circle(r)  # 모듈 이름 없이 함수 호출 가능!
    print("넓이:", ar)
    print("둘레:", ci)

main()
