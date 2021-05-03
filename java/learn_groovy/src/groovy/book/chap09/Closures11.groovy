package groovy.book.chap09

// 9.2 Closures, Collections, and Strings

// Illustrations of the method findAll and closures
// List findAll(Closure closure)

// Find all items that exceed the value 6
def values = [1, 3, 5, 7, 9].findAll { element -> element > 6 }
values.each { println it }

// Combine closures by piping the result of findAll
// through to each
[1, 3, 5, 7, 9].findAll { element -> element > 6 }.each { println it }

// Apply a findAll to a Map finding all staff over the age of 24
values = ['Ken': 21, 'John': 22, 'Sally': 25].find { staff -> staff.value > 24 }
values.each { println it }
