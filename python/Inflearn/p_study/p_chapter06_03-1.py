# Chapter06-03
# 병행성 (Concurrency): 한 컴퓨터가 여러 일을 동시에 수행 -> 단일 프로그램 안에서 여러 일을 쉽게 해결
# 병렬성 (Parallelism): 여러 컴퓨터가 여러 작업을 동시에 수행 -> 속도
# 코루틴 (Coroutine)

# 코루틴: 단일(싱글) 스레드, 스텍을 기반으로 동작하는 비동기 작업
# 스레드: OS 관리, CPU 코어에서 실시간, 시분할 비동기 작업 -> 멀티스레드
# yeild, send: 메인 <-> 서브
# 코루틴 제어, 상태, 양방향 전송

# 서브루틴: 메인루틴 호출 -> 서브루틴에서 수행 (흐름제어)
# 코루틴: 루틴 실행중 중지 -> 동시성 프로그래밍
# 코루틴: 스레드에 비해 오버헤드 감소
# 스레드: 싱글스레드 -> 멀티스레드 -> 복잡 -> 공유되는 자원 -> 교착상태 발생 가능성, 컨텍스트 스위칭 비용 발생, 자원 소비 가능성 증가
# (python 3.5 이상) def -> async, yield -> await 으로 사용 가능

# 코루틴 예제 1
def coroutine1():
    print('>>> Coroutine started!')
    i = yield
    print('>>> Coroutine received: {}'.format(i))

# 제네레이터 선언
cr1 = coroutine1()

print(cr1, type(cr1))

# yield 지점까지 서브루틴 수행
next(cr1)

# 기본 전달값 -> None
# next(cr1)

# 값 전송
cr1.send(100)

# 잘못된 사용
# cr2 = coroutine1()
# next(cr2) 없이 send 사용하는 경우
# cr2.send(100)   # 예외 발생
