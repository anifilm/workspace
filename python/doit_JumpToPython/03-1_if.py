""" 03-1 if문 """

money = True
if money:
    print("택시를 타고 가라")
else:
    print("걸어 가라")

""" 비교 연산자
비교 연산자      설명
x < y       x가 y보다 작다
x > y       x가 y보다 크다
x == y      x와 y가 같다
x != y      x와 y가 같지 않다
x >= y      x가 y보다 크거나 같다
x <= y      x가 y보다 작거나 같다

"""
x = 3
y = 2
result = x > y  # 3 > 2
print(result)   # True
result = x < y  # 3 < 2
print(result)   # False

result = x == y # 3 == 2
print(result)   # False
result = x != y # 3 != 2
print(result)   # True

money = 2000
if money >= 3000:
    print("택시를 타고 가라")
else:
    print("걸어 가라")


""" and, or, not
연산자         설명
x or y      x와 y 둘 중에 하나만 참이면 참이다
x and y     x와 y 모두 참이어야 참이다
not x       x가 거짓이면 참이다

"""

money = 2000    # 2000원을 가지고 있다
card = True
if money >= 3000 or card:
    print("택시를 타고 가라")
else:
    print("걸어 가라")


""" x in s, x not in s
in              not in
x in 문자열    x not in 문자열
x in 리스트    x not in 리스트
x in 튜플      x not in 튜플

"""

result = 1 in [1, 2, 3]     # 1이 [1, 2, 3] 안에 있는가?
print(result)       # True
result = 1 not in [1, 2, 3] # 1이 [1, 2, 3] 안에 없는가?
print(result)       # False

result = 'a' in ('a', 'b', 'c')
print(result)       # True
result = 'j' not in 'python'
print(result)       # True

pocket = ['paper', 'cellphone', 'money']    # 주머니 안에 종이, 휴대전화, 돈이 있다
if 'money' in pocket:
    print("택시를 타고 가라")
else:
    print("걸어 가라")


""" 조건문에서 아무 일도 하지 않게 설정하고 싶다면? """

pocket = ['paper', 'money', 'cellphone']
if 'money' in pocket:
    pass    # 아무것도 하지 않는다
else:
    print("카드를 꺼내라")


""" 다양한 조건을 판단하는 elif """

pocket = ['paper', 'cellphone']     # 주머니 안에 종이, 휴대전화가 있다
card = True
if 'money' in pocket:
    print("택시를 타고 가라")
else:
    if card:
        print("택시를 타고 가라")
    else:
        print("걸어 가라")

pocket = ['paper', 'cellphone']
card = True
if 'money' in pocket:   # 주머니에 돈이 있으면
    print("택시를 타고 가라")
elif card:  # 주머니에 돈이 없고 카드가 있으면
    print("택시를 타고 가라")
else:   # 주머니에 돈도 없고 카드도 없으면
    print("걸어 가라")


""" if문을 한 줄로 작성하기 """

pocket = ['paper', 'money', 'cellphone']
if 'money' in pocket:
    pass
else:
    print("카드를 꺼내라")

# 수행할 문장이 한 줄일 때 조금 더 간략하게 코드를 작성할 수 있다
pocket = ['paper', 'money', 'cellphone']
if 'money' in pocket: pass
else: print("카드를 꺼내라")


""" 조건부 표현식 """

score = 80
if score >= 60:
    message = "success"
else:
    massage = "failure"

# 파이썬의 조건부 표현식 (conditional expression)을 사용하면 위 코드를 간단히 작성할 수 있다
massage = "success" if score >= 60 else "failure"

"""
조건부 표현식은 다음과 같이 정의한다.

조건문이 참인 경우 if 조건문 else 조건문이 거짓인 경우

(조건부 표현식은 가독성에 유리하고 한 줄로 작성할 수 있어 활용성이 좋다.)
"""
