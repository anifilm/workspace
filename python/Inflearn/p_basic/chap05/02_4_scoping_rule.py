""" 변수의 범위 (Scoping Rule)
 - 전역 변수는 함수에서 사용 가능
 - 하지만, 함수 내에 전역 변수와 같은 이름의 변수를 선언하면 지역 변수에 의해 가려짐

"""
def f():
    s = "I love London!"  # 함수내 지역 변수
    print(s)  # 지역 변수 s 출력 "I love London!"

s = "I love Paris!"
f()
print(s)  # 전역 변수 s 출력 "I love Paris!"
