# Chapter06-02
# 병행성 (Concurrency)
# 이터레이터, 제네레이터
# Iterator, Generator

# 파이선 반복 가능한 타입
# for, collections, text file, List, Dict, Set, Tuple, unpacking, *args... : iterable (반복되는, 반복가능한)

# Generator 예제 3 (중요 함수)
# filterfalse, accumulate, chain, product, groupby...

import itertools

gen1 = itertools.count(1, 2.5)

print(next(gen1))
print(next(gen1))
print(next(gen1))
print(next(gen1))
# ... 무한

print()

# 조건
gen2 = itertools.takewhile(lambda n: n < 1000, itertools.count(1, 2.5))

for v in gen2:
    print(v)

print()

# 필터 반대
gen3 = itertools.filterfalse(lambda n: n < 3, [1, 2, 3, 4, 5])

for v in gen3:
    print(v)

print()

# 누적 합계
gen4 = itertools.accumulate([x for x in range(1, 101)])

for v in gen4:
    print(v)

print()

# 연결 1
gen5 = itertools.chain('ABCDE', range(1, 11, 2))

print(list(gen5))

# 연결 2
gen6 = itertools.chain(enumerate('ABCDE'))

print(list(gen6))

# 개별
gen7 = itertools.product('ABCDE')

print(list(gen7))

# 연산 (경우의 수)
gen8 = itertools.product('ABCDE', repeat=2)

print(list(gen8))

# 그룹화
gen9 = itertools.groupby('AAABBCCCCDDEEE')

# print(list(gen9))

for chr, group in gen9:
    print(chr, ' : ', list(group))

print()
