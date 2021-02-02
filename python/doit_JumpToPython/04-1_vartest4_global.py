""" 함수 안에서 선헌한 변수의 효력 범위 """

# 함수 안에서 함수 밖의 변수를 변경하는 방법
# 2. global 명령어 사용하기
def vartest():
    global a  # 전역 변수 a를 함수내에서 사용하도록 global 선언
    a = a + 1
    return a

a = 1  # 전역 변수
vartest()
print(a)
