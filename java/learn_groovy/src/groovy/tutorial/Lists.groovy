package groovy.tutorial

// Lists hold a list of objects with an index
def primes = [2, 3, 5, 7, 11, 13]

// Get a value at an index
println '2nd Prime ' + primes[1] // 3
println '3rd Prime ' + primes.get(2) // 5

// They can hold anything
def employee = ['Derek', 40, 6.25, [1, 2, 3]];

println '2nd Number ' + employee[3][1] // 2

// Get the length
println 'Length ' + primes.size()

// Add an index
primes.add(17) // [2, 3, 5, 7, 11, 13, 17]

// Append to the right
primes << 19   // [2, 3, 5, 7, 11, 13, 17, 19]
primes.add(23) // [2, 3, 5, 7, 11, 13, 17, 19, 23]

// Concatenate 2 Lists
// 원본 수정하지 않음 (재할당 필요)
println primes + [29, 31] // [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31]

// Remove the last item
// 원본 수정하지 않음 (재할당 필요)
println primes - [23] // [2, 3, 5, 7, 11, 13, 17, 19]

// Check if empty
println 'Is empty ' + primes.isEmpty()

// Get 1st 3
println '1st 3 ' + primes[0..2] // [2, 3, 5]

println primes

// Get matches
println 'Matches ' + primes.intersect([2, 3, 7]) // [2, 3, 7]

// Reverse
println 'Reverse ' + primes.reverse() // [23, 19, 17, 13, 11, 7, 5, 3, 2]

// Suffled
primes.shuffle()
println 'Shuffled ' + primes // [13, 17, 5, 7, 3, 23, 19, 2, 11]

// Sorted
println 'Sorted ' + primes.sort() // [2, 3, 5, 7, 11, 13, 17, 19, 23]

// Pop first item
println 'First ' + primes.pop() // 2
println primes // [3, 5, 7, 11, 13, 17, 19, 23]

// Remove last item
println 'Last ' + primes.removeLast() // 23
println primes // [3, 5, 7, 11, 13, 17, 19]

// Append to the left
primes.push(2)
println primes // [2, 3, 5, 7, 11, 13, 17, 19]
