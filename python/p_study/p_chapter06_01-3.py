# Chapter06-01
# 병행성 (Concurrency)
# 이터레이터, 제네레이터
# Iterator, Generator

# 파이선 반복 가능한 타입
# for, collections, text file, List, Dict, Set, Tuple, unpacking, *args... : iterable (반복되는, 반복가능한)

# Generator 패턴
# 1. 지능형 리스트, 딕셔너리, 집합 -> 데이터 양 증가 후 메모리 사용량 증가 -> 제네레이터 사용 권장
# 2. 단위 실행 가능한 코루틴 (Coroutine) 구현과 연동
# 3. 작은 메모리 조각 사용

class WordSplitGenerator:
    def __init__(self, text):
        self._text = text.split(' ')

    def __iter__(self):
        # print('Called __next__')
        for word in self._text:
            yield word  # 제네레이터
        return

    def __repr__(self):
        return 'WordSplit(%s)' % (self._text)

wg = WordSplitGenerator('Do today what you could do tomorrow')

wt = iter(wg)

print(wt, wg)
print(next(wt))
print(next(wt))
print(next(wt))
print(next(wt))
print(next(wt))
print(next(wt))
print(next(wt))
# print(next(wt))
