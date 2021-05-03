package groovy.book.chap08

// 8.1 While Statement

// while statement
// Set limit and counter
def LIMIT = 10
def count = 1

println 'Start'

while (count <= LIMIT) {
    println "count: ${count}"
    count++
}

println 'Done'

