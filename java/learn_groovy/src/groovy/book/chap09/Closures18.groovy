package groovy.book.chap09

// 9.3 Other Closure Features

// Closures as return values

// Method returning a closure
def multiply(x) {
    return { y -> return x * y }
}

def twice = multiply(2)

println "twice(4): ${twice(4)}"

// Closure returning a closure
def multiplication = { x -> return { y -> return x * y } }

def quadruple = multiplication(4)

println "quadruple(3): ${quadruple(3)}"
