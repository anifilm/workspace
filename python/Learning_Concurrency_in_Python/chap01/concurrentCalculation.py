# 소인수 찾기, 동시에 소인수 구하기 (멀티프로세스 사용)
import time
import random
from multiprocessing import Process

# 주어진 'n'에 관한 모든 소인수를 구한다.
def calculatePrimeFactors(n):
    primfac = []
    d = 2
    while d*d <= n:
        while (n % d) == 0:
            primfac.append(d)  # 인수를 반복적으로 구한다고 해보자.
            n //= d
        d += 1
    if n > 1:
        primfac.append(n)
    return primfac

# 10,000번의 계산 작업을 1,000번씩 10개로 쪼개어 처리한다.
def executeProc():
    for i in range(1000):
        rand = random.randint(20000, 100000000)
        print(calculatePrimeFactors(rand))

def main():
    print("Starting number crunching")
    t0 = time.time()

    procs = []

    # 프로세스를 생성하고 실행
    for i in range(10):
        proc = Process(target=executeProc, args=())
        procs.append(proc)
        proc.start()

    # 모든 프로세스가 종료할 때까지 대기하도록 다시한번 .join() 메서드를 사용
    for proc in procs:
        proc.join()

    t1 = time.time()
    totalTime = t1 - t0
    # 10번의 프로세스에 소요된 시간을 출력
    print("Execution Time: {}".format(totalTime))

if __name__ == '__main__':
    main()
