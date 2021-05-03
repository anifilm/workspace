package groovy.book.chap08

// 8.2 For Statement

// for statement
def LIMIT = 10

println 'Start'

for (count in 1..LIMIT) {
    println "count: ${count}"
}

println 'Done'
