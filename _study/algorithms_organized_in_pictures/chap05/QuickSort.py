def change(x, i, j):
    x[i], x[j] = x[j], x[i]

def Select(x, l, r):
    select_val = x[l]
    select_idx = l
    while l <= r:
        while l <= r and x[l] <= select_val:
            l += 1
        while l <= r and x[r] >= select_val:
            r -= 1
        if l <= r:
            change(x, l, r)
            l =+ 1
            r -= 1
    change(x, select_idx, r)
    return r

def quickSort(x, pivotMethod=Select):
        def Qsort(x, first, last):
            if first < last:
                splitP = pivotMethod(x, first, last)
                Qsort(x, first, splitP - 1)
                Qsort(x, splitP + 1, last)
    Qsort(x, 0, len(x)-1)


x = [5, 2, 8, 6, 1, 9, 3, 7]
quickSort(x)
print(x)
