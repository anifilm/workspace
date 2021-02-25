def solution(num):
    num += 1
    str_num = str(num)[::-1]
    j, k = 0, 1
    for i in str_num:
        if i == '0':
            j += k
            k *= 10
    answer = num + j
    return answer


num = 9949999;
ret = solution(num)

print("solution 함수의 반환 값은", ret, "입니다.")
