package groovy.book.chap07

// 7.6 Scope

// Variable scope
def printName(name) {
    println "Name (at entry): ${name}"
    //name = tutor
    name = 'Ken'
    println "Name (after assignment): ${name}"
}

def tutor = 'Ken'

printName('John')

//println "Name: ${name}" // ERROR: No such property
