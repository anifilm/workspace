""" 02-8 자료형의 값을 저장하는 공간, 변수 """

""" 변수란?
파이썬에서 사용하는 변수는 객체를 가리키는 것이라고도 말할 수 있다.
객체란 우리가 지금껏 보아 온 자료형과 같은 것을 의미하는 말이다.

list_a = [1, 2, 3]

만약 위 코드 처럼 list_a = [1, 2, 3] 이라고 하면 [1, 2, 3] 값을 가지는 리스트
자료형 (객체)이 자동으로 메모리에 생성되고 변수 list_a 는 [1, 2, 3] 리스트가
저장된 메모리의 주소를 가리키게 된다.

"""

# list_a 벼수가 가리키는 메모리의 주소는 다음과 같이 확인할 수 있다.
list_a = [1, 2, 3]
list_id = id(list_a)
print(list_id)      # 2882790870144

"""
id() 함수는 변수가 가리키고 있는 객체의 주소 값을 돌려주는 파이썬 내장 함수이다.
즉 여기에서 선언된 변수 list_a 가 가리키는 리스트 [1, 2, 3] 의 주소 값은
2882790870144 임을 알 수 있다.

"""


""" 리스트를 복사할 때 """

list_a = [1, 2, 3]
list_b = list_a

"""
list_b 변수에 list_a 변수를 대입하면 어떻게 될까?
list_b와 list_a는 완전히 동일하다고 할 수 있다. 다만 [1, 2, 3] 리스트를 참조하는
변수가 list_a 변수 1개에서 list_b 변수가 추가되어 2개로 늘어났다는 차이만 있을 뿐이다.

id() 함수를 사용하면 이러한 사실을 확인할 수 있다.
"""
list_a_id = id(list_a)
print(list_a_id)    # 2527069132544
list_b_id = id(list_b)
print(list_b_id)    # 2527069132544

"""
id(list_a)의 값과 id(list_b)의 값이 동일함을 확인할 수 있다. 즉 list_a가 가리키는
대상과 list_b가 가리키는 대상이 동일하다는 것을 의미한다.

동일한 객체를 가리키고 있는지에 대해서 판단하는 파이썬 명령어 is를 다음과 같이 실행
해도 역시 True를 반환한다.
"""

result = list_a is list_b   # list_a와 list_b가 가리키는 객체는 동일한가?
print(result)       # True

list_a[1] = 4
print(list_a)       # [1, 4, 3]
print(list_b)       # [1, 4, 3]

"""
리스트 list_a 의 두 번째 요소의 값을 4로 변경하였더니 list_a 만 바뀌는 것이 아니라
list_b 도 동일하게 바뀌었다.
그 이유는 앞에서 살펴본 것처럼 list_a, list_b 모두 동일한 리스트 객체를 가리키고 있기
때문이다.

그렇다면 list_b 변수를 생성할 때 list_a 변수의 값을 가져오면서 list_a 와는 다른 주소를
가리키도록 만들 수는 없을까?

다음의 2가지 방법이 있다.
"""

# 1. [:] 사용 (다음과 같이 리스트 전체를 가리키는 [:]를 사용하여 복사하는 것이다.)
list_a = [1, 2, 3]
list_b = list_a[:]  # list_a의 처음 요소부터 끝 요소까지 슬라이싱

list_a[1] = 4
print(list_a)   # [1, 4, 3]
print(list_b)   # [1, 2, 3]

# 2. copy() 함수 모듈 사용
from copy import copy

list_a = [1, 2, 3]
list_b = copy(list_a)   # list_a[:]와 동일

list_a[1] = 4
print(list_a)   # [1, 4, 3]
print(list_b)   # [1, 2, 3]

result = list_a is list_b
print(result)   # False (list_a와 list_b가 가리키는 객체가 서로 다르다)


""" 변수를 선언하는 여러 가지 방법 """

a, b = ('python', 'life')   # 튜플로 값을 대입
print(a)
print(b)

(a, b) = 'python', 'life'   # 위의 선언과 같은 의미
print(a)
print(b)

[a, b] = ['python', 'life'] # 리스트로 변수 선언
print(a)
print(b)

a = b = 'python'    # 여러 개의 변수에 같은 값을 대입
print(a)
print(b)

# 다음과 같이 두 변수의 값을 간단하게 swap 할 수 있다.
a = 3
b = 5
a, b = b, a     # a와 b의 값을 swap
print(a)    # 5
print(b)    # 3

# 두 변수는 다른 메모리에 생성된 객체를 가리키므로 False
list_a = [1, 2, 3]
list_b = [1, 2, 3]

result = list_a is list_b   # 같은 객체 인가?
print(result)   # False

result = list_a == list_b   # 같은 값 인가?
print(result)   # True
