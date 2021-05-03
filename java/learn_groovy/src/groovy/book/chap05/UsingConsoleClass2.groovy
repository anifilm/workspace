package groovy.book.chap05

import groovy.book.chap05.console.*

print 'Please enter your name and age: '
def name = Console.readString()
def age = Console.readInteger()
println "Name: ${name}, and age: ${age}"

