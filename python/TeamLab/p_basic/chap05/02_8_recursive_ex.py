""" 재귀함수 (Recursive Function)
 - 자기자신을 호출하는 함수
 - 점화식과 같은 재귀적 수학 모형을 표현할 때 사용
 - 재귀 종료 조건 존재, 종료 조건까지 함수 호출을 반복

"""
def factorial(n):
    if n == 1:
        return 1;
    else:
        return n + factorial(n - 1)

user_input = int(input("Input Number for Factorial Calc: "))

print(user_input, "Factorial:", factorial(user_input))
