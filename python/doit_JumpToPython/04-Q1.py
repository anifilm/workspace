"""
Q1
주어진 자연수가 홀수인지 짝수인지 판별해 주는 함수(is_odd)를 작성해 보자.

"""
def is_odd(number):
    if number % 2 == 1:  # 2로 나누었을 때 나머지가 1이면 홀수이다.
        return True
    else:
        return False
