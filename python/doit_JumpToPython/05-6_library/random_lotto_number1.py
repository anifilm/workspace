""" 05-6 라이브러리 (외장 함수) """

# random

import random

LottorNumber = []
while len(LottorNumber) < 6:
    V = random.randint(1, 45)
    if V not in LottorNumber:  # 중복되지 않은 값을 리스트에 추가
        LottorNumber.append(V)

print(LottorNumber)
