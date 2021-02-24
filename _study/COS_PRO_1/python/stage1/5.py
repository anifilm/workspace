# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean

def solution(n):
    answer = 0
    lst = list(range(n*n, 0, -1)) # 뒤집어진 리스트생성
    sum = 0
    if n % 2 == 0: # n이 짝수이면
        v = 1
        s = 2
    else:
        v = 0
        s = 4

    for i in range(n):
        print(i, lst[v])
        sum += lst[v]
        v += s

    answer = sum
    return answer


n1 = 3
ret1 = solution(n1)

print("solution 함수의 반환 값은", ret1, "입니다.")

n2 = 5
ret2 = solution(n2)

print("solution 함수의 반환 값은", ret2, "입니다.")
