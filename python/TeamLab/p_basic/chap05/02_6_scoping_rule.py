""" 변수의 범위 (Scoping Rule) """
def calculate(x, y):
    total = x + y  # 함수 내 지역 변수 total을 선언하고 새로운 값을 할당
    print("In Function")
    print("a:", a, "b:", b, "a+b:", a+b)
    print("total:", total)
    return total

a = 5      # 전역 변수 a
b = 7      # 전역 변수 b
total = 0  # 전역 변수 total
print("In Program - 1")
print("a:", a, "b:", b, "a+b:", a+b)

sum = calculate(a, b)
print("After calculate()")
print("total:", total, " sum:", sum)  # 지역 변수는 전역 변수에 영향 X
