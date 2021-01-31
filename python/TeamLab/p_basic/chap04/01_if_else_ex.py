# if ~ else문
# 가장 기본적인 조건문으로 조건에 따른 명령을 실행
print("Tell me your age?")
myage = int(input())  # 나이를 입력 받아 myage 변수에 할당
if myage < 30:  # myage가 30미만 일 때
    print("Welcome to the Club")
else:           # myage가 30이상 일 때
    print("Oh! No. You are not accepted.")

# 조건 판단 방법
# - if 다음에 조건을 표기하여 참 또는 거짓을 판단함
# - 참/거짓의 구분을 위해서는 비교 연산자를 활용

"""
비교 연산자     비교 상태      설명
x < y          ~보다 작다     x가 y보다 작은지 판단
x > y          ~보다 크다     x가 y보다 큰지 판단
x == y           같다         x와 y가 같은지 판단
x is y           같다         (값, 메모리 주소)
x != y           다르다       x와 y가 다른지 판단
x is not y       다르다       (값, 메모리 주소)
x >= y         크거나 같다     x가 y에 대해 이상인지 판단
x <= y         작거나 같다     x가 y에 대해 이하인지 판단
"""
