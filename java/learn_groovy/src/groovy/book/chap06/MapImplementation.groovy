package groovy.book.chap06

// 6.2 Interation 2: Map Implementation

// initialize the loans databases
def library = [
    'Ken': ['Groovy', 'UML'],
    'John': ['Java']
]

// add a new borrower
library['Sally'] = ['Basic']

// update an existing borrower
library['John'] = library['John'] << 'OOD'

// display the data in various ways
println "Library: ${library}"

println "Ken has borrowed UML? ${library['Ken'].contains('UML')}"

println "Number of borrowers in the library: ${library.size()}"

println "Library: ${library.keySet().sort()}"

println "Number of books borrowed by Ken: ${library['Ken'].size()}"
