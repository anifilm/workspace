package groovy.book.chap03

// 3.4 String Methods
println 'Hello'.compareToIgnoreCase('hello') // 0
println 'Hello'.concat('world')  // "Hello world"
println 'Hello'.endsWith('lo')   // true
println 'Hello'.equalsIgnoreCase('hello') // true
println 'Hello'.indexOf('lo')    // 3
println 'Hello world'.indexOf('o', 6) // 7
println 'Hello'.matches('Hello') // true
println 'Hello'.matches('He')    // false
println 'Hello'.replaceAll('l', 'L') // "HeLLo"
println 'Hello world'.split("l") // [He, , o wor, d]
println 'Hello'.substring(1)     // "ello"
println 'Hello'.substring(1, 4)  // "ell"
println 'Hello'.toUpperCase()    // "HELLO"

def message = 'Hello'
println message.center(11)       // "   Hello   "
println message.center(3)        // "Hello"
println message.center(11, '#')  // "###Hello###"
message.eachMatch(".") { ch -> println ch } // print H e l l o
println message.getAt(0)         // "H"
println message.getAt(0..<3)     // "Hel"
println message.getAt([0, 2, 4]) // "Hlo"
println message.leftShift('world') // "Hello world"
println message << 'world'         // "Hello world"
println message.minus('ell')     // "Ho"
println message - 'ell'          // "Ho"
println message.padLeft(4)       // "Hello"
println message.padLeft(11)      // "      Hello"
println message.padLeft(11, '#') // "######Hello"
println message.padRight(4)      // "Hello"
println message.padRight(11)     // "Hello      "
println message.padRight(11, '#') // "Hello######"
println message.plus('world')    // "Hello world"
println message + 'world'        // "Hello world"
println message.replaceAll('[a-z]') { ch -> ch.toUpperCase() } // "HELLO"
println message.reverse()        // "olleH"
println message.toList()         // [H, e, l, l, o]

def message2 = 'Hello world'
println message2.tokenize()      // [Hello, world]
println message2.tokenize("l")   // [He, o wor, d]
