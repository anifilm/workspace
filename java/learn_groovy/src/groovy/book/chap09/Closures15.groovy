package groovy.book.chap09

// 9.2 Closures, Collections, and Strings

// Factorial of 5
// Object inject(Object value, Closure closure)

// Direct usage
def factorial = [2, 3, 4, 5].inject(1) { previous, element -> previous * element }
println "Factorial(5): ${factorial}"

// Equivalence
def fact = 1
[2, 3, 4, 5].each { number -> fact *= number }
println "Fact: ${fact}"

// Named list
def list = [2, 3, 4, 5]
factorial = list.inject(1) { previous, element -> previous * element }
println "Factorial(5): ${factorial}"

// Named list and closure
list = [2, 3, 4, 5]
def closure = { previous, element -> previous * element }
factorial = list.inject(1, closure)
println "Factorial(5): ${factorial}"
