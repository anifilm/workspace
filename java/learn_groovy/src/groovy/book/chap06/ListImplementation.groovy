package groovy.book.chap06

// 6.1 Interation 1: Specification and List Implementation

// initialize the loans databases
def library = [
    ['Ken', 'Groovy'],
    ['Ken', 'UML'],
    ['John', 'Java']
]

// add two new loans
library << ['John', 'OOD']
library.add(['Sally', 'Basic'])

// print the loan details
println "Library: ${library}"

// determine if Ken has borrowed UML
println "Ken has borrowed UML? ${library.contains(['Ken', 'UML'])}"

// print the number of books on loan
println "Number of books on loan: ${library.size()}"
