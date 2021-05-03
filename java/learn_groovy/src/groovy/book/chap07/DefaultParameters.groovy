package groovy.book.chap07

// 7.3 Default Parameters

// Default parameters
def greetings(salutation, name = 'Ken') {
    println "${salutation} ${name}"
}

greetings('Hello', 'John') // "Hello John"
greetings('Welcome')       // "Welcome Ken"
