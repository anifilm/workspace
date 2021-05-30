# Pickle
# - 파이썬의 객체를 영속화(persistence)하는 built-in 객체
# - 데이터, object 등 실행중 정보를 저장 → 불러와서 사용
# - 저장해야하는 정보, 계산 결과(모델) 등 활용이 많음

import pickle

file = open("./list.bin", "rb")

test_pickle = pickle.load(file)
print(test_pickle)

file.close()
