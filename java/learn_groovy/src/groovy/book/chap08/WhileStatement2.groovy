package groovy.book.chap08

import groovy.book.console.*

// 8.1 While Statement

// Sum of a series of positive integers
// Running total
def sum = 0

print 'Enter first value: '
def data = Console.readInteger()
while (data >= 0) {
    sum += data
    print 'Enter next value: '
    data = Console.readInteger()
}

println "The sum is : ${sum}"
