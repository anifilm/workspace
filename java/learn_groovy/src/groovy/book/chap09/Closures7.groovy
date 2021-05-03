package groovy.book.chap09

// 9.1 Closures

// Factorial with closures
def factorial = 1
1.upto(5) { num -> factorial *= num }
println "Factorial(5): ${factorial}"
