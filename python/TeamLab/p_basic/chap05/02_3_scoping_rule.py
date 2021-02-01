""" 변수의 범위 (Scoping Rule)
 - 변수가 사용되는 범위 (함수 또는 메인 프로그램)
 - 지역 변수 (Local Variable): 함수 내에서만 사용
 - 전역 변수 (Global Variable): 프로그램 전체에서 사용

"""
def test(t):
    print(x)  # 전역 변수 x 출력
    t = 20  # 함수내 지역 변수
    print("In Function:", t)  # 지역 변수 t 출력

x = 10  # 전역 변수
test(x)
# 함수에서 선언된 지역 변수 t는 함수 종료 이후에 메모리에서 소멸되므로 사용 불가
print(t)
