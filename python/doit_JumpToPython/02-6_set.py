""" 02-6 집합 자료형 """

# 집합 자료형은 다음과 같이 set 키워드를 사용해 만들 수 있다.
set_a = set([1, 2, 3])
print(set_a)    # {1, 2, 3}

# 위와 같이 set()의 괄호 안에 리스트를 입력하여 만들거나 다음과 같이 문자열을
# 입력하여 만들 수도 있다.
set_b = set("Hello")
print(set_b)    # {'e', 'H', 'l', 'o'}


""" 집합 자료형의 특징
자, 그런데 위에서 살펴본 set("Hello")의 결과가 좀 이상하지 않은가? 분명 "Hello"
문자열로 set 자료형을 만들었는데 생성된 자료형에는 'l' 문자가 하나 빠져 있고 순서도
뒤죽박죽이다.

그 이유는 set에 다음과 같은 2가지 큰 특징이 있기 때문이다.

 - 중복을 허용하지 않는다.
 - 순서가 없다. (Unordered)

리스트나 튜플은 순서가 있기(ordered) 때문에 인덱싱을 통해 자료형의 값을 얻을 수
있지만 set 자료형은 순서가 없기(unordered) 때문에 인덱싱으로 값을 얻을 수 없다.
이는 마치 02-5에서 살펴본 딕셔너리와 비슷하다. 딕셔너리 역시 순서가 없는 자료형이라
인덱싱을 지원하지 않는다.

만약 set 자료형에 저장된 값을 인덱싱으로 접근하려면 다음과 같이 리스트나 튜플로 변환
한 후 해야 한다.

"""

set_a = set([1, 2, 3])
list_a = list(set_a)    # 리스트로 변환
print(list_a)       # [1, 2, 3]
print(list_a[0])    # 1

tuple_a = tuple(set_a)  # 튜플로 변환
print(tuple_a)      # (1, 2, 3)
print(tuple_a[0])   # 1


""" 교집합, 합집합, 차집합 구하기 """

set_a = set([1, 2, 3, 4, 5, 6])
set_b = set([4, 5, 6, 7, 8, 9])

# 교집합
result = set_a & set_b
print(result)   # {4, 5, 6}

# '&' 기호를 사용하면 교집합을 간단히 구할 수 있다.
# 또는 다음과 같이 Intersection() 함수를 사용해도 동일한 결과는 돌려준다.
result = set_a.intersection(set_b)
print(result)   # {4, 5, 6}

# set_b.intersection(set_a)을 사용해도 결과는 같다.

# 합집합
result = set_a | set_b
print(result)   # {1, 2, 3, 4, 5, 6, 7, 8, 9}

# '|' 기호를 사용하여 합집합을 구할 수 있다.
# 또는 union() 함수를 사용할 수 있다.
result = set_a.union(set_b)
print(result)   # {1, 2, 3, 4, 5, 6, 7, 8, 9}

# 차집합
result = set_a - set_b
print(result)   # {1, 2, 3}
result = set_b - set_a
print(result)   # {8, 9, 7}

# '-' 기호를 사용하여 차집합을 구할 수 있다.
# 또는 difference() 함수를 사용할 수 있다.
result = set_a.difference(set_b)
print(result)   # {1, 2, 3}
result = set_b.difference(set_a)
print(result)   # {8, 9, 7}


""" 집합 자료형 관련 함수 """

# 값 1개 추가하기 (add)
set_a = set([1, 2, 3])
set_a.add(4)
print(set_a)    # {1, 2, 3, 4}

# 값 여러 개 추가하기 (update)
set_a = set([1, 2, 3])
set_a.update([4, 5, 6])
print(set_a)    # {1, 2, 3, 4, 5, 6}

# 특정 값 제거하기 (remove)
set_a = set([1, 2, 3])
set_a.remove(2)
print(set_a)    # {1, 3}
