package groovy.book.chap09

// 9.2 Closures, Collections, and Strings

// Sample uses of collect method
// List collect(Closure closure)

// Square of the values
def list = [1, 2, 3, 4].collect { element -> return element * element }
println "list: ${list}"

// Square of the values (no explicit return)
list = [1, 2, 3, 4].collect { element -> element * element }
println "list: ${list}"

// Double of the values (no explicit return)
list = (0..<5).collect { element -> 2 * element }
println "list: ${list}"

// Age by one year
def staff = ['Ken': 21, 'John': 22, 'Sally': 25]
list = staff.collect { entry -> ++entry.value }
def olderStaff = staff.collect { entry -> ++entry.value; return entry }
println "staff: ${staff}"
println "list : ${list}"
println "olderStaff: ${olderStaff}"
