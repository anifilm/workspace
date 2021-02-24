""" 05-6 라이브러리 (외장 함수) """

# threading 모듈

import time
import threading  # 스레드를 생성하기 위해서 threading 모듈이 필요하다.

def long_task():
    for i in range(5):
        time.sleep(1)
        print("working: %s\n" % i)

print("Start")

threads = []
for i in range(5):
    t = threading.Thread(target=long_task)  # 스레드를 생성한다.
    threads.append(t)

for t in threads:
    t.start()  # 스레드를 실행한다.

print("End")
