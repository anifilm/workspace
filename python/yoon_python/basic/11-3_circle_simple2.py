""" 11-3 모듈을 가져다 쓰는 방법 2 """

from circle import ar_circle  # circle.py의 ar_circle 함수를 가져다 쓰려고 한 선언
from circle import ci_circle  # circle.py의 ci_circle 함수를 가져다 쓰려고 한 선언

def ar_circle(rad):  # 원의 넓이를 출력, 원래 가지고 있던 함수
    print("넓이:", rad * rad * 3.14)

def ci_circle(rad):  # 원의 둘레를 출력, 원래 가지고 있던 함수
    print("둘레:", rad * 2 * 3.14)

def main():
    r = float(input("반지름 입력: "))
    ar_circle(r)  # 위에 있는 함수를 호출하려는 상황
    ci_circle(r)  # 위에 있는 함수를 호출하려는 상황

    sum = ar_circle(r) + ci_circle(r)  # circle.py에 있는 두 함수를 호출하려는 상황
    print("넓이와 둘레의 합:", sum)

main()

"""
위 예제는 실행 중간에 오류가 발생하는데 그 이유는 다음과 같다.

  "예제에서 만든 함수의 이름과 가져다 쓰려는 함수의 이름이 똑같다."

즉, 두 함수의 이름이 구분되지 않아서 문제가 된다. 파이썬은 이 상황에서 어떤 함수를 호출
해야 할지 판단하지 못하기 때문에 문제가 된다. 자! 그럼 이런 상황의 문제를 어떻게 해결
해야 할까? 일단 위 예제의 다음 두 선언을 보자.

  from circle import ar_circle  # circle.py의 ar_circle을 갖다 쓰겠음
  from circle import ci_circle  # circle.py의 ci_circle을 갖다 쓰겠음

위 두 선언을 다음과 같이 바꿔주면 문제는 해결이 된다.

  from circle import ar_circle as ac  # circle.py의 ar_circle을 ac라는 이름으로 갖다 쓰겠음
  from circle import ci_circle as cc  # circle.py의 ci_circle을 cc라는 이름으로 갖다 쓰겠음

"""
