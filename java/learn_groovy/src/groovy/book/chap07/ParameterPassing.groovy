package groovy.book.chap07

// 7.5 Parameter Passing

// Parameter aliasing
def printName(name) {
    println "Name (at entry): ${name}"
    name = 'John'
    println "Name (after assignment): ${name}"
}

def tutor = 'Ken'
printName(tutor)

println "Tutor: ${tutor}"
