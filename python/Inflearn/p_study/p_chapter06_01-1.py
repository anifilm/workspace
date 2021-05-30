# Chapter06-01
# 병행성 (Concurrency)
# 이터레이터, 제네레이터
# Iterator, Generator

# 파이선 반복 가능한 타입
# for, collections, text file, List, Dict, Set, Tuple, unpacking, *args... : iterable

# 반복 가능한 이유? -> iter(x) 함수 호출
t = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'

# for 반복
for c in t:
    print(c)

print()

# while 반복
w = iter(t)

while True:
    try:
        print(next(w))
    except StopIteration:
        break

print()

from collections import abc

# 반복형 확인
print(dit(t))    # __iter__를 확인
print(hasattr(t,  '__iter__'))
print(isinstance(t, abc.Iterable))

print()
