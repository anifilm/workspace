""" 05-6 라이브러리 (외장 함수) """

# random.choice
# 임력으로 받은 리스트에서 무작위로 하나를 선택하여 돌려준다.

import random

def random_pop(data):
    number = random.choice(data)
    data.remove(number)  # 추출 값이 중복되지 않도록 리스트에서 이미 추출된 데이터를 삭제
    return number

data = list(range(1, 46))

for i in range(6):
    print(random_pop(data), end=' ')
print()
