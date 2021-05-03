package groovy.book.chap07

// 7.7 Collections as Method Parameters and Return Values

// List parameter and return
def sort(list, ascending = true) {
    list.sort()
    if (ascending == false)
        list = list.reverse()
    return list
}

def numbers = [10, 5, 3, 6]

assert(sort(numbers, false)) == [10, 6, 5, 3]
println sort(numbers, false)
