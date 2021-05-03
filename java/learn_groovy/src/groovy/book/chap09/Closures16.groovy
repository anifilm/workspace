package groovy.book.chap09

// 9.3 Other Closure Features

// Closures as method parameters

// Find those items that qualify
def filter(list, predicate) {
    return list.findAll(predicate)
}

// Two predicate closure
def isEven = { x -> return (x % 2 == 0) }
def isOdd = { x -> return !isEven(x) }

def table = [11, 12, 13, 14]

// Apply filter
def evens = filter(table, isEven)
println "evens: ${evens}"

def odds = filter(table, isOdd)
println "odds: ${odds}"
