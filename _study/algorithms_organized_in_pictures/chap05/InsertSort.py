def insertSort(x):
    for size in range(1, len(x)):
        val = x[size]
        i = size
    while i > 0 and x[i-1] > val:
        x[i] = x[i-1]
        i -= 1
    x[i] = val


x = [5, 2, 8, 6, 1, 9, 3, 7]
insertSort(x)
print(x)
