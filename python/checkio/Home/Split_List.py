def split_list(items: list) -> list:
    first_list = []
    second_list = []
    
    list_count = len(items)
    
    for c in range(list_count):
        if c < list_count / 2:
            first_list.append(items[c])
        else:
            second_list.append(items[c])
    
    items = [first_list, second_list]

    return items


if __name__ == '__main__':
    print("Example:")
    print(split_list([1, 2, 3, 4, 5, 6]))

    # These "asserts" are used for self-checking and not for an auto-testing
    assert split_list([1, 2, 3, 4, 5, 6]) == [[1, 2, 3], [4, 5, 6]]
    assert split_list([1, 2, 3]) == [[1, 2], [3]]
    assert split_list([1, 2, 3, 4, 5]) == [[1, 2, 3], [4, 5]]
    assert split_list([1]) == [[1], []]
    assert split_list([]) == [[], []]
    print("Coding complete? Click 'Check' to earn cool rewards!")