""" 02-3 리스트 자료형

리스트는 어떻게 만들고 사용할까?

리스트를 사용하면 1, 3, 5, 6, 9 숫자 모음을 다음과 같이 간단하게 표현할 수 있다.
odd = [1, 3, 5, 7, 9]

리스트명 = [요소1, 요소2, 요소3, ...]

"""

# 여러 가지 리스트의 예제
list_a = []
list_b = [1, 2, 3]
list_c = ['Life', 'is', 'too', 'short']
list_d = [1, 2, 'Life', 'is']
list_e = [1, 2, ['Life', 'is']]


""" 리스트의 인덱싱과 슬라이싱 """

# 리스트의 인덱싱
list_a = [1, 2, 3]
print(list_a)               # [1, 2, 3]

print(list_a[0])            # 1
print(list_a[0] + list_a[2])    # 4: 1 + 3

print(list_a[-1])           # 3

list_b = [1, 2, 3, ['a', 'b', 'c']]
print(list_b[0])            # 1

print(list_b[-1])           # ['a', 'b', 'c']
print(list_b[3])            # ['a', 'b', 'c']

print(list_b[-1][0])        # 'a'
print(list_b[-1][1])        # 'b'
print(list_b[-1][2])        # 'c'

# 삼중 리스트에서 인덱싱하기
list_c = [1, 2, ['a', 'b', ['Life', 'is']]]
print(list_c[2][2][0])      # 'List'


# 리스트의 슬라이싱
list_d = [1, 2, 3, 4, 5]
print(list_d[0:2])          # [1, 2]

# 위의 예를 문자열에서 슬라이싱했던 것과 비교해 보자 (문자열 슬라이싱과 사용법이 같다)
a = "12345"
print(a[0:2])               # '12'

# 몇 가지 예를 더 들어 보자
list_e = [1, 2, 3, 4, 5]
print(list_e[:2])           # [1, 2]
print(list_e[2:])           # [3, 4, 5]

# 중첩된 리스트에서 슬라이싱하기
list_f = [1, 2, 3, ['a', 'b', 'c'], 4, 5]
print(list_f[2:5])          # [3, ['a', 'b', 'c'], 4]
print(list_f[3][:2])        # ['a', 'b']
