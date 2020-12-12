def mergeSort(x):
    if len(x) > 1:
        mid = len(x) // 2
        colx, rowx = x[:mid], x[mid:]
        mergeSort(colx)
        mergeSort(rowx)

    coli, rowi, i = 0, 0, 0
    while coli < len(colx) and rowi < len(rowx):
        if colx[coli] < rowx[rowi]:
            x[i] = colx[coli]
            coli += 1
        else:
            x[i] = rowx[rowi]
            rowi += 1
        i += 1
    x[i:] = colx[coli:] if coli != len(colx) else rowx[rowi:]


x = [5, 2, 8, 6, 1, 9, 3, 7]
mergeSort(x)
print(x)
