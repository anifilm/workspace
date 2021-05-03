package groovy.book.chap07

// 7.1 Methods

// Simple method definition
def greetings() {
    println 'Hello and welcome'
}

greetings()

// Methods with three statements
def greetings2() {
    print 'Hello'
    print ' and '
    println 'welcome'
}

greetings2()

// Multiple statements on a single line
def greetings3() {
    print 'Hello'; print ' and '
    println 'welcome'
}

greetings3()

