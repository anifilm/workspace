""" 01
두 정수를 입력받아 첫번째 정수가 두번째 정수보다 크거나 같으면 True를, 그렇지 않으면 False를 되돌려주는 함수를
작성하고 main에서 그 함수를 불러 결과를 출력하는 프로그램을 작성하라. 함수 원형은 def is_larger(f, s):로 한다.
힌트 논리 연산의 결과는 True나 False이고 그것을 함수 리턴 값으로 돌려준다.
  > Enter two intergers.
  > 3 3 ([Enter])
  > Result is True.
"""
def is_larger(f, s):
    return f >= s


def main():
    print("Enter two intergers.");
    first, second = map(int, input().split())

    print("Result is %s." % (is_larger(first, second)))


if __name__ == '__main__':
    main()
