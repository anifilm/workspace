def change(x, i, j):
    x[i], x[j] = x[j], x[i]

def selectionSort(x):
    for size in reversed(range(len(x))):
        max_i = 0
        for i in range(1, 1 + size):
            if x[i] > x[max_i]:
                max_i = i
        change(x, max_i, size)


x = [5, 2, 8, 6, 1, 9, 3, 7]
selectionSort(x)
print(x)    # 결과는 당연히 1, 2, 3, 5, 6, 7, 8, 9로 나온다.
