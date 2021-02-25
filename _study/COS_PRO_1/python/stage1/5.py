def solution(n):
    answer = 0
    lst = list(range(n*n, 0, -1)) # 뒤집어진 리스트생성
    if n % 2 == 0: # n이 짝수이면
        check = True
        cnt = 1
        inc = 1
        for i in range(n):
            answer += lst[cnt]
            if check == False:
                inc += 4
                cnt += inc
                check = True
            else:
                if inc == 1:
                    inc += 1
                cnt += inc
                check = False
    else:
        check = False
        cnt = 0
        inc = 4
        for i in range(n):
            answer += lst[cnt]
            if check == False:
                cnt += inc
                check = True
            else:
                cnt += inc
                inc += 4
                check = False
    return answer


n1 = 5
ret1 = solution(n1)

print("solution 함수의 반환 값은", ret1, "입니다.")

n2 = 6
ret2 = solution(n2)

print("solution 함수의 반환 값은", ret2, "입니다.")
