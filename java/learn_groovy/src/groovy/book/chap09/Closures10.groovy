package groovy.book.chap09

// 9.2 Closures, Collections, and Strings

// Illustrations of the find method and closures
// Object find(Closure closure)

// locate the value 7
def value = [1, 3, 5, 7, 9].find { element -> element > 6 }
println "Found: ${value}"

// locate no value (null)
value = [1, 3, 5, 7, 9].find { element -> element > 10 }
println "Found: ${value}"

// first staff member over 24
value = ['Ken': 21, 'John': 22, 'Sally': 25].find { staff -> staff.value > 24 }
println "Found: ${value}"

// in this case, be appropriate to use a pair of parameters
// for the key and the value, as in:
value = ['Ken': 21, 'John': 22, 'Sally': 25].find { key, val -> val > 24 }
println "Found: ${value}"
