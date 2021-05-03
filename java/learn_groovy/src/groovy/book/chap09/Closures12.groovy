package groovy.book.chap09

// 9.2 Closures, Collections, and Strings

// Examples of methods any and every
// boolean any(Closure closure)
// boolean every(Closure closure)

// Any number over 12?
def anyElement = [11, 12, 13, 14].any { element -> element > 12 }
println "anyElement: ${anyElement}"

// Are all values over 10?
def anyElements = [11, 12, 13, 14].every { element -> element > 10 }
println "anyElements: ${anyElements}"

// Any staff member over the age of 30?
def anyStaff = ['Ken': 21, 'John': 22, 'Sally': 25].any { staff -> staff.value > 30 }
println "anyStaff: ${anyStaff}"
