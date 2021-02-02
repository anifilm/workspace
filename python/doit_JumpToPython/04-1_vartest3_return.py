""" 함수 안에서 선헌한 변수의 효력 범위 """

# 함수 안에서 함수 밖의 변수를 변경하는 방법
# 1. return 사용하기
def vartest(a):
    a = a + 1
    return a

a = 1
a = vartest(a)  # vartest(a)의 결과값을 함수 밖의 변수 a에 전달
print(a)
