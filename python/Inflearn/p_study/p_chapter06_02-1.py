# Chapter06-02
# 병행성 (Concurrency)
# 이터레이터, 제네레이터
# Iterator, Generator

# 파이선 반복 가능한 타입
# for, collections, text file, List, Dict, Set, Tuple, unpacking, *args... : iterable (반복되는, 반복가능한)

# Generator 예제 1
def generator_ex1():
    print('Start')
    yield 'A Point.'
    print('continue')
    yield 'B Point.'
    print('End')

temp = iter(generator_ex1())

# print(next(temp))
# print(next(temp))
# print(next(temp))

for v in generator_ex1():
    print(v)

print()
