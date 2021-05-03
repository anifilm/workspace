package groovy.book.chap08

import groovy.book.console.*

// 8.5 Break Statement

// for loop and break statement
def MAX = 100
def sum = 0

for (k in 1..MAX) {
    print 'Enter next value: '
    def value = Console.readInteger()
    if (value < 0)
        break
    sum += value
}
println "sum: ${sum}"
