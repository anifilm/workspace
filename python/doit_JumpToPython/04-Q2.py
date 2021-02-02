"""
Q2
입력으로 들어오는 모든 수의 평균 값을 계산해 주는 함수를 작성해 보자. (단 입력으로
들어오는 개수는 정해져 있지 않다.)

"""
def avg_numbers(*args):
    result = 0
    for i in args:  # args는 튜플 이다.
        result += i
    return result / len(args)

avg = avg_numbers(1, 2)
print(avg)  # 1.5 출력

avg = avg_numbers(1, 2, 3, 4, 5)
print(avg)  # 3.0 출력
