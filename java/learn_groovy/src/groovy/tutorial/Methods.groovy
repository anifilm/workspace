package groovy.tutorial

// Methods allow us to break our code into parts and also
// allow us to reuse code
sayHello()

// Pass parameters
println '5 + 4 = ' + getSum(5, 4)

// Demonstrate pass by value
def myName = 'Derek'
passByValue(myName)
println 'In Main: ' + myName

// Pass a list for doubling
def listToDouble = [1, 2, 3, 4]
listToDouble = doubleList(listToDouble)
println listToDouble

// Pass unknown number of elements to a method
def nums = sumAll(1, 2, 3, 4)
println 'Sum: ' + nums

// Calculate factorial (Recursion)
def fact4 = factorial(4);
println 'Factorial 4: ' + fact4


def sayHello() {
    println 'Hello'
}

def getSum(num1 = 0, num2 = 0) {
    return num1 + num2
}

def passByValue(name) {
    name = 'In Function';
    println 'Name: ' + name
}

def doubleList(list) {
    def newList = list.collect{ it * 2 }
    return newList
}

def sumAll(int... num) { // 매개변수로 수열을 리스트로 받는다.
    def sum = 0;
    num.each{ sum += it }
    return sum
}

def factorial(num) {
    if (num <= 1) return 1
    return num * factorial(num - 1)
}
