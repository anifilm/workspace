""" 05
통계학에서 변이(variance)란 평균과의 차이 제곱을 모두 더해 그것을 데이터 수로 나눈 값이다. 변이에 루트를 취하면
표준 편차(Standard Deviation)가 된다. 3.0, 5.0, 7.0이라는 데이터가 있다면 평균은 (3.0 + 5.0 + 7.0) / 3 = 5.0
이다. 따라서 변이는 ((5.0 - 3.0)² + (5.0 - 5.0)² + (5.0 - 7.0)²) / 3 = 2.666667 이다. 표준 편차를 계산하려면
변이에 루트를 씌야하 하므로 math에 정의된 sqrt 함수를 불러야 한다. 세 개의 실수를 입력받은 후 표준 편차를 계산
하는 프로그램을 작성하되 main에서 반드시 print("Standard deviation is %f" % std_deviation(a, b, c))
라는 명령문을 호출하라.
힌트 main에서 std_deviation 함수를 호출하고 std_deviation 함수 내부에서 average 함수를 호출한다.
  def average(a, b, c):
  def std_deviation(a, b, c):

  > Enter a three real numbers.
  > 3 5 7 ([Enter])
  > Standard deviation is 1.632993
"""
import math


def average(a, b, c):
    result = (a+b+c) / 3
    return result


def std_deviation(a, b, c):
    avg = average(a, b, c)
    variance = ((avg-a) ** 2 + (avg-b) ** 2 + (avg-c) ** 2) / 3
    return math.sqrt(variance)


def main():
    print("Enter a three real numbers.")
    a, b, c = map(float, input().split())

    print("Standard deviation is %f" % std_deviation(a, b, c))


if __name__ == '__main__':
    main()
