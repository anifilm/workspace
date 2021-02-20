# 파이썬의 예외처리 예제 2
# 예외 정보 표시하기
for i in range(10):
    try:
        print(i, 10 // i)
    except ZeroDivisionError as e:
        print(e)
        print("Not divided by 0")

"""
Exception의 종류
- Built-in Exception: 기본적으로 제공하는 예외

Exception 이름       내용
IndexError          List의 Index 범위를 넘어갈 때
NameError           존재하지 않는 변수를 호출할 때
ZeroDivisionError   0으로 숫자를 나눌 때
ValueError          변환할 수 없는 문자/숫자를 변환할 때
FileNotFoundError   존재하지 않는 파일을 호출할 때
"""
