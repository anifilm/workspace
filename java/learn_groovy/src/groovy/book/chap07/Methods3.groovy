package groovy.book.chap07

import groovy.book.console.*

// 7.1 Methods

// Converting a clock time
def processtime() {
    print 'Enter the time to be converted: '
    def hours = Console.readInteger()
    def minutes = Console.readInteger()
    def seconds = Console.readInteger()
    def totalSeconds = (60 * hours + minutes) * 60 + seconds
    println "The original time of: ${hours} hours, ${minutes} minutes and ${seconds} seconds"
    println "Converts to: ${totalSeconds} seconds"
}

processtime()
