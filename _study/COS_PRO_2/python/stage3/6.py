# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean

def solution(tile_length):
    answer = ''
    com = 'RRRGGB'
    if tile_length % 6 == 1 or tile_length % 6 == 2 or tile_length % 6 == 4:
        answer = '-1'
    else:
        for i in range(tile_length):
            answer += com[i % 6]
    return answer


tile_length1 = 11
ret1 = solution(tile_length1)

print("solution 함수의 반환 값은", ret1, "입니다.")

tile_length2 = 16
ret2 = solution(tile_length2)

print("solution 함수의 반환 값은", ret2, "입니다.")
