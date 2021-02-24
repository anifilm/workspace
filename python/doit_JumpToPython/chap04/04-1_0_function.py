""" 04-1 함수 """

""" 파이썬 함수의 구조

간단하지만 많은 것을 설명해 주는 다음 예를 보자.
"""
def add(a, b):
    return a + b
"""
위 함수는 다음과 같이 풀이된다.

이 함수의 이름(함수 이름)은 add이고 입력으로 2개의 값을 받으녀 결과값은 2개의 입력값을 더한 값이다.

여기에서 return은 함수의 결과값을 돌려주는 명령어이다. 이제 직접 add 함수를 사용해 보자.
"""
a = 3
b = 4
c = add(a, b)  # add(3, 4)의 반환 값을 c에 대입
print(c)


""" 매개변수와 인수

매개변수(parameter)와 인수(arguments)는 혼용해서 사용되는 헷갈리는 용어이므로 잘 기억해 두자
매개변수는 함수에 입력으로 전달된 값을 받는 변수를 의미하고 인수는 함수를 호출할 때 전달하는
입력값을 의미한다.

"""
def add(a, b):  # a, b는 매개변수
    return a + b

print(add(3, 4))  # 3, 4는 인수


""" 입력값과 결과값에 따른 함수의 형태

함수는 들어온 입력값을 받아 어떤 처리를 하여 적절한 결과값을 돌려준다.
함수의 형태는 입력값과 결과값의 존재 유무에 따라 4가지 유형으로 나뉜다. 자세히 알아보자.

"""

# 일반적인 함수
def add(a, b):
    result = a + b
    return result  # a + b의 결과값 반환

a = add(3, 4)
print(a)


# 입력값이 없는 함수
def say():
    return 'Hi'

a = say()
print(a)


# 결과값이 없는 함수
def add(a, b):
    print("%d, %d의 합은 %d입니다." % (a, b, a+b))

add(3, 4)  # "3, 4의 합은 7입니다."


# 입력값도 결과값도 없는 함수
def say():
    print('Hi')

say()


""" 매개변수 지정하여 호출하기 """

def add(a, b):
    return a + b

result = add(a=3, b=7)  # a에 3, b에 7을 전달
print(result)

result = add(b=5, a=3)  # b에 5, a에 3을 전달 (순서에 상관없이 사용할 수 있다.)
print(result)


""" 입력값이 몇 개가 될지 모를 때는 어떻게 해야 할까? """

# 여러 개의 입력값을 받는 함수 만들기
def add_many(*args):
    result = 0
    for i in ages:
        result += i  # *args에 입력받은 모든 값을 더한다.
    return result

result = add_many(1, 2, 3)  # add_many 함수의 결과값을 result 변수에 대입
print(result)

result = add_many(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
print(result)

# 여러 개의 입력을 처리할 때 위의 예제 처럼 함수의 매개변수로 *args만 사용할 수 있는 것은 아니다.
def add_mul(choice, *args):
    if choice == "add":  # 매개변수 choice에 'add'를 입력받았을 때
        result = 0
        for i in args:
            result += i  # args에 입력받은 모든 값을 더한다.
    elif choice == "mul":  # 매개변수 choice에 'mul'을 입력받았을 때
        result = 1
        for i in args:
            result *= i  # *args에 입력받은 모든 값을 곱한다.
    return result

result = add_mul('add', 1, 2, 3, 4, 5)
print(result)

result = add_mul('mul', 1, 2, 3, 4, 5)
print(result)


""" 키워드 파라미터

이번에는 키워드 파라미터에 대해 알아보자. 키워드 파라미터를 사용할 때는 매개변수 앞에 별 두개(**)를
붙인다. 역시 이것도 예제로 알아보자. 먼저 다음과 같은 함수를 작성한다.
"""
def print_kwargs(**kwargs):
    print(kwargs)

print_kwargs(a=1)  # {'a': 1}
print_kwargs(name='foo', age=3)  # {'name': 'foo', 'age': 3}

""" 두 예제의 입력값이 모두 딕셔너리로 만들어 져서 출력된다는 것을 확인할 수 있다. 즉 **kwargs처럼
매개변수 이름 앞에 **을 붙이면 매개변수 kwargs는 딕셔너리가 되고 모든 key=value 형태의 결과값이
그 딕져너리에 저장된다. """


""" 함수의 결과값은 언제나 하나이다. """

def add_and_mul(a, b):
    return a+b, a*b  # 2개의 매개변수를 받아 더한 값과 곱한 값을 돌려준다.

result = add_and_mul(3, 4)

""" add_and_mul 함수의 결과값 a+b와 a*b는 튜플 값 하나인 (a+b, a*b)로 돌려준다.
따라서 result 변수는 다음과 같은 값을 갖게 된다.
  result = (7, 12)

즉 결과값으로 (7, 12)라는 튜플 값을 갖게 되는 것이다.
만약 이 하나의 튜플 값을 2개의 결과값처럼 받고 싶다면 다음과 같이 함수를 호출하면 된다.
"""
result1, result2 = add_and_mul(3, 4)

"""
이렇게 호출하면 result1, result2 = (7, 12) 가 되어 result1은 7이 되고 result2는 12가 된다.
"""


""" return의 또 다른 쓰임새

특별한 상황일 때 함수를 빠져나가고 싶다면 return을 단독으로 써서 함수를 즉시 빠져나갈 수 있다.
"""
def say_nick(nick):
    if nick == "바보":  # "바보"가 입력되었다면 return으로 함수를 빠져나간다.
        return
    print("나의 별명은 %s입니다." % nick)

say_nick("야호")  # "나의 별명은 야호입니다."
say_nick("바보")  # 출력 없음


""" 매개변수에 초기값 미리 설정하기 """

def say_myself(name, old, man=True):
    print("나의 이름은 %s입니다." % name)
    print("나이는 %d살입니다." % old)
    if man:
        print("남자입니다.")
    else:
        print("여자입니다.")

say_myself("박응용", 27)
say_myself("박응용", 27, True)
say_myself("박응선", 27, False)


""" lambda 표현식 (익명함수)

lambda 매개변수1, 매개변수2, ... : 매개변수를 사용한 표현식

"""
add = lambda a, b: a+b
result = add(3, 4)
print(result)
