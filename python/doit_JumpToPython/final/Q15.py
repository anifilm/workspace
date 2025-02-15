"""
Q15 Duplicate Numbers

0~9의 문자로 된 숫자를 입력받았을 때, 이 입력값이 0~9의 모든 숫자를 각각 한 번씩만 사용한
것인지 확인하는 함수를 작성하시오.

입력 예시: 0123456789 01234 01234567890 6789012345 012322456789
출력 예시: true false false true false

"""

def checkDuplNum(st):
    result = []
    for num in st:
        if num not in result:
            result.append(num)
        else:
            return False
    return len(result) == 10

print(checkDuplNum("0123456789"))   # True
print(checkDuplNum("01234"))        # False
print(checkDuplNum("01234567890"))  # False
print(checkDuplNum("6789012345"))   # True
print(checkDuplNum("012322456789")) # False
