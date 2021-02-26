"""
Q14 문자열 압축하기

문자열을 입력받아 같은 문자가 연속적으로 반복되는 경우에 그 반복 횟수를 표시해 문자열을
압축하여 표시하시오.

입력 예시: aaabbcccccca
출력 예시: a3b2c6a1

"""

def zipper(zip_str):
    s_str = []
    s_str.append(zip_str[0])
    count = 1
    for i in range(1, len(zip_str)):
        if zip_str[i-1] == zip_str[i]:
            count += 1
        else:
            s_str.append(str(count))
            s_str.append(zip_str[i])
            count = 1
    else:
        s_str.append(str(count))
    return ''.join(s_str)


s = "aaabbcccccca"
result = zipper(s)
print(result)
