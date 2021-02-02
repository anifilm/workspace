""" 02-8 main 함수가 있는 방식으로 예제를 작성하자 """

def add(num1, num2):  # add 함수의 정의
    return num1 + num2

def sub(num1, num2):  # sub 함수의 정의
    return num1 - num2

def mul(num1, num2):  # mul 함수의 정의
    return num1 * num2

def div(num1, num2):  # div 함수의 정의
    return num1 / num2

def main():  # 프로그램의 실행 흐름을 담은 main 함수의 정의
    print(add(5, 3))
    print(sub(5, 3))
    print(mul(5, 3))
    print(div(5, 3))

main()  # main 함수의 호출
