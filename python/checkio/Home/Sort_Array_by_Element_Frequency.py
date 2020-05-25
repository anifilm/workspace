def frequency_sort(items):
    # for i in range(len(items)):
    #   print(items.count(items[i]))

    #   for j in range(1, len(items)):
    #       if i > j:
    #           continue
    #       elif items[i] == items[j]:
    #           items.insert(i, items[j])
    #           items.pop(j+1)

    return sorted(items, key = lambda x: (items.count(x), -items.index(x)), reverse=True)


if __name__ == '__main__':
    print("Example:")
    print(frequency_sort([4, 6, 2, 2, 6, 4, 4, 4]))

    # These "asserts" are used for self-checking and not for an auto-testing
    assert list(frequency_sort([4, 6, 2, 2, 6, 4, 4, 4])) == [4, 4, 4, 4, 6, 6, 2, 2]
    assert list(frequency_sort(['bob', 'bob', 'carl', 'alex', 'bob'])) == ['bob', 'bob', 'bob', 'carl', 'alex']
    assert list(frequency_sort([17, 99, 42])) == [17, 99, 42]
    assert list(frequency_sort([])) == []
    assert list(frequency_sort([1])) == [1]
    # assert list(frequency_sort([4, 4, 4, 4, 6, 6, 2, 2, 2])) == [4, 4, 4, 4, 2, 2, 2, 6, 6]
    print("Coding complete? Click 'Check' to earn cool rewards!")
