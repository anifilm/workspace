def nearest_value(values: set, one: int) -> int:
    list_val = list(values)
    diff = 100
    index = 0

    for i in range(len(list_val)):
        if one < 0:
            if abs(one - list_val[i]) <= diff:
                diff = abs(one - list_val[i])
                index = i
        else:
            if abs(one - list_val[i]) < diff:
                diff = abs(one - list_val[i])
                index = i

    return list_val[index]


    # Best Solution

    # return min(sorted(values), key=lambda x: abs(x-one))


if __name__ == '__main__':
    print("Example:")
    print(nearest_value({4, 7, 10, 11, 12, 17}, 9))

    # These "asserts" are used for self-checking and not for an auto-testing
    assert nearest_value({4, 7, 10, 11, 12, 17}, 9) == 10
    assert nearest_value({4, 7, 10, 11, 12, 17}, 8) == 7
    assert nearest_value({4, 8, 10, 11, 12, 17}, 9) == 8
    assert nearest_value({4, 9, 10, 11, 12, 17}, 9) == 9
    assert nearest_value({4, 7, 10, 11, 12, 17}, 0) == 4
    assert nearest_value({4, 7, 10, 11, 12, 17}, 100) == 17
    assert nearest_value({5, 10, 8, 12, 89, 100}, 7) == 8
    assert nearest_value({-1, 2, 3}, 0) == -1
    assert nearest_value([0, -2], -1) == -2
    print("Coding complete? Click 'Check' to earn cool rewards!")
