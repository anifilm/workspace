package groovy.tutorial

print 'Whats your name? '
def fName = System.in.newReader().readLine()
println 'Hello ' + fName

// You must cast to the right value
// toInteger, toDouble
print 'Enter a number: '
def num1 = System.in.newReader().readLine().toDouble()
print 'Enter another: '
def num2 = System.in.newReader().readLine().toDouble()
printf '%.2f + %.2f = %.2f \n', [num1, num2, (num1 + num2)]

/*
Read from STDIN in Groovy
Reading from the Standard Input, normally the keyboard, is also quite easy.

print 'What is your name? '
def name = System.in.newReader().readLine()
println 'Your name is ' + name


Read from Console in Groovy
A shorter alternative is to use the Console object, but rumors say that it might not work
inside an IDE. It works when running in the terminal.

def name = System.console().readLine 'What is your name? '
println 'Your name is ' + name


Converting string to Integer

print 'First number: '
def x = System.in.newReader().readLine() as Integer
print 'Second number: '
def y = System.in.newReader().readLine() as Integer
println x * y

 */
