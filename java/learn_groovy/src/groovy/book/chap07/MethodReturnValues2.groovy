package groovy.book.chap07

import groovy.book.console.*

// 7.4 Method Return Values

// Implicit returns
def hmsToSeconds(h, m, s) {
    def totalSeconds = (60 * h + m) * 60 + s
    totalSeconds
}

// Get the input from the user.
print 'Enter hours to convert: '
def hours = Console.readInteger()
print 'Enter minutes to convert: '
def minutes = Console.readInteger()
print 'Enter seconds to convert: '
def seconds = Console.readInteger()

// Now call the method.
def total = hmsToSeconds(hours, minutes, seconds)
println "Total number of seconds = ${total}"
