package groovy.book.chap04

// 4.2 List Methods
[11, 12, 13, 14].add(15)     // [11, 12, 13, 14, 15]
[11, 12, 13, 14].add(2, 15)  // [11, 12, 15, 13, 14]
[11, 12, 13, 14].add([15, 16]) // [11, 12, 13, 14, 15, 16]
[11, 12, 13, 14].get(1)      // 12
[11, 12, 13, 14].isEmpty()   // false
[11, 12, 13, 14].size()      // 4
[11, 12, [13, 14]].flatten() // [11, 12, 13, 14]
[11, 12, 13, 14].getAt(1)    // 12
[11, 12, 13, 14].getAt(1..2) // [12, 13]
[11, 12, 13, 14].getAt([2, 3]) // [13, 14]
[11, 12, 13, 14].intersect([13, 14, 15]) // [13, 14]
[11, 12, 13, 14].pop()       // 14
[11, 12, 13, 14].reverse()   // [14, 13, 12, 11]
[14, 13, 12, 11].sort()      // [11, 12, 13, 14]

def numbers = [11, 12, 13, 14]
numbers.remove(3)
println numbers // [11, 12, 13]
// 정수 요소 값을 사용하여 해당 요소를 제거하는 것은 불가능
//numbers.remove(13) // IndexOutOfBoundsException

def names = ['Ken', 'John', 'Sally', 'Joy']
names.remove(3)  // 인덱스를 사용하여 요소 제거
println names    // [Ken, John, Sally]
names.remove('Ken') // 요소의 이름을 사용하여 요소 제거
println names    // [John, Sally]
