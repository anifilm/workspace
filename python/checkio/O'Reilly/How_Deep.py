def how_deep(structure):
    # for i in structure:
    #     if type(i) == tuple or type(i) == list:
    #         return 1 + how_deep(i)
    #     else:
    #         return 0

    if type(structure) == int:
        return 0
    else:
        return 1 + max([how_deep(s) for s in structure], default=0)


if __name__ == '__main__':
    print("Example:")
    print(how_deep((1, 2, 3)))
    # These "asserts" are used for self-checking and not for an auto-testing
    assert how_deep((1, 2, 3)) == 1
    assert how_deep((1, 2, (3,))) == 2
    assert how_deep((1, 2, (3, (4,)))) == 3
    assert how_deep(()) == 1
    assert how_deep(((),)) == 2
    assert how_deep((((),),)) == 3
    assert how_deep((1, (2,), (3,))) == 2
    assert how_deep((1, ((),), (3,))) == 3
    # assert how_deep([1, [2], [2, [3]]]) == 3
    print("Coding complete? Click 'Check' to earn cool rewards!")
