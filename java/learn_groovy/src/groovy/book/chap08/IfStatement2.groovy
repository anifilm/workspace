package groovy.book.chap08

import groovy.book.console.*

// 8.3 If Statement

// Interchange two values
print 'Enter first value: '
def first = Console.readInteger()
print 'Enter second value: '
def second = Console.readInteger()

// Exchange the order
if (first > second) {
    def temp = first
    first = second
    second = temp
}

println "${first} and ${second}"
