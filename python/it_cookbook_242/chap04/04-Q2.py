""" 02
점 p(x1, y1)와 점 q(x2, y2)의 좌표를 입력받아 두 점 사이의 거리를 출력하는 프로그램을 작성하라.
단, x1, y1, x2, y2는 float으로 선언해야 한다.
힌트 두 점 사이의 거리는 (x2 - x1)의 제곱에 (y2 - y1)의 제곱을 더한 후에 루트를 씌워 제곱근을 구해야 한다.
제곱근을 구하는 함수인 math.sqrt(square root) 함수를 불러다 쓰려면 import math라는 지시어를 추가해야 한다.
이 함수는 distance = math.sqrt(n) 라고 하면 n의 제곱근이 distance에 대입된다.
  > Enter the coordinates of point p.
  > 1.0 1.0 ([Enter])
  > Enter the coordinates of point q.
  > 4.0 5.0 ([Enter])
  > Distance between the points is 5.000000
"""
import math


def main():
    print("Enter the coordinates of point p.")
    x1, y1 = map(float, input().split())

    print("Enter the coordinates of point q.")
    x2, y2 = map(float, input().split())

    distance = math.sqrt((x2-x1) ** 2.0 + (y2-y1) ** 2.0)
    print("Distance between the points is %f" % distance);


if __name__ == '__main__':
    main()
