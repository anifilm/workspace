""" 내가 프로그램을 만들 수 있을까?
함수 이름은?    GuGu로 짓자
입력받는 값은?  2
출력하는 값은?  2단(2, 4, 6, 8, ..., 18)
결과는 어떤 형태로 저장하지?  연속된 자료형이니까 리스트!
"""

def GuGu(n):
    result = []
    i = 1
    while i < 10:
        result.append(n * i)
        i += 1
    return result

print(GuGu(2))
