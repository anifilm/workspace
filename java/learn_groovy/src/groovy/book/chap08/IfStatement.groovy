package groovy.book.chap08

import groovy.book.console.*

// 8.3 If Statement

// A simple of statement
print 'Enter first value: '
def first = Console.readInteger()
print 'Enter second value: '
def second = Console.readInteger()

if (first < second) {
    println "${first} and ${second}"
} else {
    println "${second} and ${first}"
}
