package groovy.book.chap05

import groovy.book.chap05.console.*

print 'Please enter your name: '
def name = Console.readString()
println "My name is ${name}"

print 'Please enter your age: '
def age = Console.readInteger()
println "My age is: ${age}"

