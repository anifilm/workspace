package groovy.book.chap03

/* String literals
''                   Empty string
'He said "Hello"!'   Single quotes (with nested double quotes)
"He said 'Hello'!"   Double quotes (with nested single quotes)
"""ont two three"""  Triple quites
"""Spread            Multi-line text using triple quotes
over
four
lines"""
 */

// 3.1 String Literals
def age = 25
println 'My age is ${age}'     // "My age is ${age}"
println "My age is ${age}"     // "My age is 25"
println """My age is ${age}""" // "My age is 25"
println "My age is \${age}"    // "My age is ${age}"

def multiline = '''\
Spread
over
four
lines'''
println multiline

// 3.2 String Indexing and Slicing
def greeting = 'Hello world'
println greeting[4]     // "o"    index from start
println greeting[-1]    // "d"    index from end
println greeting[1..2]  // "el"   slice with inclusive range
println greeting[1..<3] // "el"   slice with exclusive range
println greeting[4..2]  // "oll"  backword slice
println greeting[4,1,6] // "oew"  selective slicing

// 3.3 Basic Operations
println 'Hello' + 'world'    // "Hello world"      concatenate
println 'Hello' * 3          // "HelloHelloHello"  repeat
println greeting - 'o world' // "Hell"             remove first occurrence
println greeting.size()      // 11                 synonymous with length
println greeting.length()    // 11                 synonymous with size
println greeting.count('o')  // 2
println greeting.contains('ell') // true

