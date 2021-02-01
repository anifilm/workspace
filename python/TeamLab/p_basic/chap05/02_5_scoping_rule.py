""" 변수의 범위 (Scoping Rule)
 - 함수 내에서 global 키워드를 사용하여 전역 변수 사용 가능

"""
def f():
    global s  # 함수내에서 전역 변수 s 사용을 선언
    s = "I love London!"  # 전역 변수 s에 문자열 할당
    print(s)  # 전역 변수 s 출력 "I love London!"

s = "I love Paris!"  # 전역 변수
f()
print(s)  # 함수에서 변경된 전역 변수 s 출력 "I love London!"
