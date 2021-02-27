"""
Q13 DashInsert 함수

DashInsert 함수는 숫자로 구성된 문자열을 입력받은 뒤 문자열 안에서 홀수가 연속되면 두 수
사이에 - 를 추가하고, 짝수가 연속되면 * 를 추가하는 기능을 갖고 있다. DashInsert 함수를
완성하시오.

입력 예시: 4546793
출력 예시: 454*67-9-3

"""

def dash_insert(st):
    lst = list(st)
    rst = []
    if int(lst[0]) % 2 == 0:
        odd = True
    else:
        odd = False
    rst.append(lst[0])

    for i in range(1, len(lst)):
        if int(lst[i]) % 2 == 0:
            if odd == True:
                rst.append('*')
            rst.append(lst[i])
            odd = True
        else:
            if odd == False:
                rst.append('-')
            rst.append(lst[i])
            odd = False

    return ''.join(rst)


s = "4546793"
result = dash_insert(s)
print(result)
