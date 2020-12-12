def radix(order):
    is_sorted = False
    position = 1

    while not is_sorted:
        is_sorted = True
        queue_list = [list() for _ in range(10)]

        for num in order:
            digit_number = (int)(num/position) % 10
            queue_list[digit_number].append(num)
            if is_sorted and digit_number > 0:
                is_sorted = False

        index = 0
        for numbers in queue_list:
            for num in numbers:
                order[index] = num
                index += 1

        position *= 10


x = [5, 2, 8, 6, 1, 9, 3, 7]
radix(x)
print(x)    # 결과는 1, 2, 3, 5, 6, 7, 8, 9로 나오게 된다.
