"""
Q14 문자열 압축하기

문자열을 입력받아 같은 문자가 연속적으로 반복되는 경우에 그 반복 횟수를 표시해 문자열을
압축하여 표시하시오.

입력 예시: aaabbcccccca
출력 예시: a3b2c6a1

"""

def comp_str(st):
    s_str = []
    s_str.append(st[0])
    count = 1
    for i in range(1, len(st)):
        if st[i-1] == st[i]:
            count += 1
        else:
            s_str.append(str(count))
            s_str.append(st[i])
            count = 1
    else:
        s_str.append(str(count))
    return ''.join(s_str)


s = "aaabbcccccca"
result = comp_str(s)
print(result)
