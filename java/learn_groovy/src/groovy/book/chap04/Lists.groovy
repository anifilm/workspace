package groovy.book.chap04

/* List literals
[11, 12, 13, 14]           A list of integer values
['Ken', 'John', 'Andrew']  A list of Strings
[1, 2, [3, 4], 5]          A nested list
['Ken', 21, 1.69]          A heterogeneous list of object references
[]                         An empty list
 */

// 4.1 Lists
def numbers = [11, 12, 13, 14] // list with four items
println numbers[0] // 11
println numbers[3] // 14

println numbers[-1] // 14
println numbers[-2] // 13

println numbers[0..2]  // [11, 12, 13]
println numbers[1..<3] // [12, 13]

numbers[1] = 22        // [11, 22, 13, 14]
numbers[1] = [33, 44]  // [11, [33, 44], 13, 14]

numbers << 15   // [11, [33, 44], 13, 14, 15]

numbers = [11, 12, 13, 14] // list with four items
numbers + [15, 16] // [11, 12, 13, 14, 15, 16]

numbers = [11, 12, 13, 14] // list with four items
numbers - [13]     // [11, 12, 14]

