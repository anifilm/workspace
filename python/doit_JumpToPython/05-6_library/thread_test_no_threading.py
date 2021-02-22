""" 05-6 라이브러리 (외장 함수) """

# threading 모듈 (스레드 미사용)

import time

def long_task():  # 5초의 시간이 걸리는 함수
    for i in range(5):
        time.sleep(1)  # 1초간 대기
        print("working: %s\n" % i)

print("Start")

for i in range(5):  # long_take를 5회 수행한다.
    long_task()

print("End")
