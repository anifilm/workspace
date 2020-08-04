# Chapter07-02
# AsyncIO
# 비동기 I/O Coroutine 작업
# Generator -> 반복적인 객체 Return 사용
# Non-blocking 비동기 처리

# Blocking I/O: 호출된 함수가 자신의 작업이 완료될 때까지 제어권을 가지고 있음. 타 함수는 대기
# Non-blocking I/O: 호출된 함수가 (서브루틴) return 후 호출한 함수 (메인 루틴)에 제어권 전달 -> 타 함수는 작업 지속

# 스레드 단점: 디버깅, 자원 접근시 레이스컨디션 (경쟁상태), 데드락 (Dead Lock) -> 고려후 코딩
# 코루틴 장점: 하나의 루틴만 실행 -> 락 관리 필요X -> 제어권으로 실행
# 코루틴 단점: 사용 함수가 비동기로 구현이 되어 있어야 하거나, 또는 직접 비동기로 구현해야 한다

# asyncio 웹 스크래핑 실습
# BeautifulSoup 추가
# 스케쥴러 사용시 주기적으로 데이터 수집 가능
# 수집 정보 DB 저장 -> 파이썬 기초 강의 참고
import asyncio
import timeit
from urllib.request import urlopen
from concurrent.futures import ThreadPoolExecutor
import threading
from bs4 import BeautifulSoup

import sys
import io

sys.stdout = io.TextIOWrapper(sys.stdout.detach(), encoding = 'utf-8')
sys.stderr = io.TextIOWrapper(sys.stderr.detach(), encoding = 'utf-8')

# 실행 시작 시간
start = timeit.default_timer()
# 서비스 방향이 비슷한 사이트로 실습 권장 (ex: 게시판성 커뮤니티)
urls = ['https://daum.net', 'https://naver.com', 'http://mlbpark.donga.com', 'https://tistory.com', 'https://inflearn.com']

async def fetch(url, executor):
    # 스레드명 출력
    print('Thread Name:', threading.current_thread().getName(), 'Start', url)
    # 실행
    res = await loop.run_in_executor(executor, urlopen, url)
    soup = BeautifulSoup(res.read(), 'html.parser')

    # 전체 페이지 소스 확인
    # print(soup.prettify())

    # 이 부분에서 BeautifulSoup Selector (선택자)를 활용하여 다양한 정보 가져오기 가능
    # 현 예제에서는 페이지 타이틀 정보 수집
    result_data = soup.title

    print('Thread Name:', threading.current_thread().getName(), 'Done', url)
    # 결과 반환
    return result_data.text

async def main():
    # 스레드 풀 생성
    executor = ThreadPoolExecutor(max_workers=10)
    # future 객체 모아서 gather 에서 실행
    futures = [asyncio.ensure_future(fetch(url, executor)) for url in urls]
    # 결과 취합
    rst = await asyncio.gather(*futures)

    print('Result:', rst)
    print()

if __name__ == '__main__':
    # 루프 초기화
    loop = asyncio.get_event_loop()
    # 작업 완료까지 대기
    loop.run_until_complete(main())
    # 수행시간 계산
    duaration = timeit.default_timer() - start
    # 전체 실행 시간
    print('Total Running Time: {:.2f}s'.format(duaration))
