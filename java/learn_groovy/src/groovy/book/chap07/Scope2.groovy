package groovy.book.chap07

// 7.6 Scope

// Variables and methods in same scope
def tutor = 'Ken'

def printName(name) {
    println "Name: ${name}"
    //println "Tutor: ${tutor}"
}

printName('John')
