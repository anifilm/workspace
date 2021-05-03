package groovy.book.chap09

// 9.3 Other Closure Features

// Selection sort
def selectionSort = { list ->
    def swap = { sList, p, q ->
        def temp = sList[p]
        sList[p] = sList[q]
        sList[q] = temp
    }
    def minimumPosition = { pList, from ->
        def mPos = from
        def nextFrom = 1 + from
        for (j in nextFrom..<pList.size()) {
            if (pList[j] < pList[mPos])
                mPos = j
        }
        return mPos
    }
    def size = list.size() - 1
    for (k in 0..<size) {
        def minPos = minimumPosition(list, k)
        swap(list, minPos, k)
    }
    return list
}

def table = [13, 14, 12, 11, 14]

def sorted = selectionSort(table)

println "sorted: ${sorted}"
