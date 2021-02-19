# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean


def solution(num_apple, num_carrot, k):
    answer = 0

    if num_apple < (3 * num_carrot):
        answer = num_apple // 3
    else:
        answer = num_carrot

    num_apple -= answer * 3
    num_carrot -= answer

    i = 0
    k = k - (num_apple + num_carrot)

    while k > 0:
        print(k)
        if i % 4 == 0:
            answer = answer - 1
        i = i + 1
        k = k - 1

    return answer


num_apple1 = 5
num_carrot1 = 1
k1 = 2
ret1 = solution(num_apple1, num_carrot1, k1)

print("solution 함수의 반환 값은", ret1, "입니다.")

num_apple2 = 10
num_carrot2 = 5
k2 = 4
ret2 = solution(num_apple2, num_carrot2, k2)

print("solution 함수의 반환 값은", ret2, "입니다.")
