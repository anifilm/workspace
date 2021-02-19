# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean

def solution(arr):
    answer = 0
    for i in arr:
        if i/2 in arr:
            answer += 1
    return answer


arr = [4, 8, 3, 6, 7]
ret = solution(arr)

#[실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
print("solution 함수의 반환 값은", ret, "입니다.")
