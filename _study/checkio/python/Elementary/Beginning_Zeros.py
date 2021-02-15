def beginning_zeros(number: str) -> int:
    str_num = str(number)
    ans = 0

    for i in str_num[0:]:
        if int(i) == 0:
            ans += 1
        else:
            break

    return ans


    # Best Solution

    # return len(number) - len(number.lstrip('0'))


if __name__ == '__main__':
    print("Example:")
    print(beginning_zeros('100'))

    # These "asserts" are used for self-checking and not for an auto-testing
    assert beginning_zeros('100') == 0
    assert beginning_zeros('001') == 2
    assert beginning_zeros('100100') == 0
    assert beginning_zeros('001001') == 2
    assert beginning_zeros('012345679') == 1
    assert beginning_zeros('0000') == 4
    print("Coding complete? Click 'Check' to earn cool rewards!")
