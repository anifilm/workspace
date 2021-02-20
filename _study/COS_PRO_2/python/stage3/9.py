# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean

def solution(day, numbers):
    count = 0
    for number in numbers:
        if number%2 == day%2:
            count += 1
    return count


day = 17
numbers = [3285, 1724, 4438, 2988, 3131, 2998]
ret = solution(day, numbers)

print("solution 함수의 반환 값은", ret, "입니다.")
