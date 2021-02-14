# assert 구문
# 특정 조건에 만족하지 않을 경우 예외 발생
def get_binary_number(decimal_number):
    assert isinstance(decimal_number, int)
    return bin(decimal_number)


print(get_binary_number("10"))
