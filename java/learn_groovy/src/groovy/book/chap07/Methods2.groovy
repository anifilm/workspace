package groovy.book.chap07

import groovy.book.console.*

// 7.1 Methods

// Method variables
def reverse() {
    print 'Enter the two integer values: '
    def first = Console.readInteger()
    def second = Console.readInteger()
    println "Reversed values: ${second} and ${first}"
}

reverse()
