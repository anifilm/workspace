# Chapter04-01
# 시퀀스형
# 컨테이너(Container: 서로 다른 자료형[List, tuple, collections.deque])
# 플랫(Flat: 한개의 자료형[str, bytes, bytearray, array.array, memoryview])

# 가변(list, bytearray, array.array, memoryview, deque)
# 불변(tuple, str, bytes)

# 리스트 및 튜플 고급
# 지능형 리스트(Comprehending Lists)
chars = '+_)(*&^%$#@!)'
code_list1 = []

for s in chars:
    # 유니코드 리스트
    code_list1.append(ord(s))

print(code_list1)

# Comprehending Lists
code_list2 = [ord(s) for s in chars]

print(code_list2)

# Comprehending Lists + Map, Filter
code_list3 = [ord(s) for s in chars if ord(s) > 40]
code_list4 = list(filter(lambda x : x > 40, map(ord, chars)))

print(code_list3)
print(code_list4)

# 전체 출력
print(code_list1)
print(code_list2)
print(code_list3)
print(code_list4)
print([chr(s) for s in code_list1])
print([chr(s) for s in code_list2])
print([chr(s) for s in code_list3])
print([chr(s) for s in code_list4])
print()


# Generator 생성
import array

# Generator: 한번에 한개의 항목을 생성(메모리 유지X)
tuple_g = (ord(s) for s in chars)
array_g = array.array('I', (ord(s) for s in chars))

print(type(tuple_g))
print(next(tuple_g))

print(type(array_g))
print(array_g.tolist())
print()

# Generator 예제
print(('%s' %c + str(n) for c in ['A', 'B', 'C', 'D'] for n in range(1, 21)))

for s in ('%s' %c + str(n) for c in ['A', 'B', 'C', 'D'] for n in range(1, 21)):
    print(s)

print()


# 리스트 주의
marks1 = [['~'] * 3 for n in range(4)]
marks2 = [['~'] * 3] * 4

print(marks1)
print(marks2)
print()

# 수정
marks1[0][1] = 'X'
marks2[0][1] = 'X'

print(marks1)
print(marks2)

# 증명
print([id(i) for i in marks1])
print([id(i) for i in marks2])
