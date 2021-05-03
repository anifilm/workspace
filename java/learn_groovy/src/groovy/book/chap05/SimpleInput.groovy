package groovy.book.chap05

// 5.3 Simple Input
//print "Please enter your name: "
//def name = System.in.newReader().readLine()
//println "My name is: ${name}"

def readString() {
    return System.in.newReader().readLine()
}

def readInteger() {
    return System.in.newReader().readLine().toInteger()
}

def readDouble() {
    return System.in.newReader().readLine().toDouble()
}

print 'Please enter your name: '
def name = readString()
println "My name is: ${name}"

print 'Please enter your age: '
def age = readInteger()
println "My name is: ${age}"
