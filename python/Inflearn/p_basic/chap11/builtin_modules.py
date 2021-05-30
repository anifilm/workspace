# Built-in Modules
# - 파이썬이 기본 제공하는 라이브러리
# - 문자처리, 웹, 수학 등 다양한 모듈이 제공됨
# - 별다른 조치없이 import 문으로 활용 가능

# 난수
import random
print(random.randint(0, 100))  # 0~100사이의 정수 난수를 생성
print(random.random())  # 일반적인 난수 생성

# 시간
import time
print(time.localtime())  # 현재 시간 출력

# 웹
import urllib.request
response = urllib.request.urlopen("https://www.naver.com")
print(response.read())
