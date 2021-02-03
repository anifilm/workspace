""" 모듈을 불러오는 또 다른 방법 """

# 1. sys.path.append(모듈을 저장한 디렉터리) 사용하기
import sys
sys.path.append("./doit")

import mod2

result = mod2.add(3, 4)
print(result)


# PYTHONPATH 환경 변수 사용하기
# $ set PYTHONPATH=./doit
