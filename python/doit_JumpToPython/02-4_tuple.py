""" 02-4 튜플 자료형

튜플 (tuple)은 몇 가지 점을 제외하곤 리스트와 거의 비슷하며 리스트와 다른 점은
다음과 같다.

 - 리스트는 [ ]으로 둘러싸지만 튜플은 ( )으로 둘러싼다.
 - 리스트는 그 값의 생성·삭제·수정이 가능하지만 튜플은 그 값을 바꿀 수 없다.

"""

# 여러 가지 튜플의 예제
tuple_a = ()
tuple_b = (1,)
tuple_c = (1, 2, 3)
tuple_d = 1, 2, 3
tuple_e = ('a', 'b', ('ab', 'cd'))
"""
리스트와 모습은 거의 비슷하지만 튜플에서는 리스트와 다른 2가지 차이점을 찾아볼 수 있다.

tuple_b = (1,)
처럼 단지 1개의 요소만을 가질 때는 요소 뒤에 콤마(,)를 반드시 붙여야 한다는 것과

tuple_d = 1, 2, 3
처럼 괄호( )를 생략해도 무방하다는 점이다.

"""

""" 튜플의 요소값을 지우거나 변경하려고 하면 어떻게 될까? """

# 1. 튜플 요소값을 삭제하려 할 때
tuple_a = (1, 2, 'a', 'b')
#del tuple_a[0]     # TypeError 발생

# 2. 튜플 요소값을 변경하려 할 때
tuple_a = (1, 2, 'a', 'b')
#tuple_a[0] = 'c'   # TypeError 발생
"""
튜플은 요소를 지우거나 값을 변경하는 행위가 지원되지 않는다는 메시지를 확인할 수 있다.

"""

""" 튜플 다루기 """

# 1. 인덱싱 하기
tuple_a = (1, 2, 'a', 'b')
print(tuple_a[0])   # 1
print(tuple_a[3])   # 'b'

# 2. 슬라이싱 하기
tuple_a = (1, 2, 'a', 'b')
result = tuple_a[1:]
print(result)       # (2, 'a', 'b')

# 3. 튜플 더하기
tuple_b = (3, 4)
result = tuple_a + tuple_b
print(result)       # (1, 2, 'a', 'b', 3, 4)

# 4. 튜플 곱하기
result = tuple_b * 2
print(result)       # (3, 4, 3, 4)

# 5. 튜플 길이 구하기
tuple_a = (1, 2, 'a', 'b')
tuple_a_len = len(tuple_a)  # 4
print(tuple_a_len)
