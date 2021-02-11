""" 03
제곱을 구하는 함수를 두번 호출한 후 그 결과값을 더하여 a² + b² 을 구하라. 함수 원형은 def square(n):으로 한다.
  > Enter a, b.
  > 3 4 ([Enter])
  > 3² + 4² = 25
"""
def square(n):
    return n ** 2


def main():
    print("Enter a, b.");
    a, b = map(int, input().split())

    print("%d² + %d² = %d" % (a, b, square(a) + square(b)));


if __name__ == '__main__':
    main()
