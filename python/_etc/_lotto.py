"""
Q13
random 모듈을 사용하여 로또 번호(1~45 사이의 숫자 6개)를 생성해 보자. (단 중복된
숫자가 있으면 안 됨)

"""
import random

print('이번주 로또 추천번호')
print(random.sample(range(1, 46), 6))
print()
print('다음주 연금복권 추천번호')
print(random.sample(range(1, 5), 1), end='')
print(random.sample(range(0, 9), 6))
print()
