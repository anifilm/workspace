""" 06
파이썬 math 모듈은 floor(3.14) = 3.000000, ceil(3.14) = 4.000000 와 같이 floor(바닥) 함수와
ceil(ceiling, 천정) 함수를 제공한다. 이 함수들은 float 형 인자를 받아서 int 형 리턴 값을 돌려준다.
import math 를 통해 이 함수들을 불러다 쓸 수 있다. 양의 실수를 입력받은 후에 그것을 반올림한 정수를
돌려주는 함수를 만들고 main에서 그 결과를 확인하라.
힌트 입력 값에 0.5를 더한 뒤 floor 함수를 적용하면 반올림한 결과가 나온다. 이를 int 형으로 변환해야 한다.
  def round_up(n):

  > Enter a positive real number.
  > 4.625 ([Enter])
  > The round up value is 5
"""
import math


def round_up(n):
    return math.floor(n + 0.5)


def main():
    print("Enter a positive real number.")
    num = float(input())

    print("The round up value is %d" % round_up(num))


if __name__ == '__main__':
    main()
