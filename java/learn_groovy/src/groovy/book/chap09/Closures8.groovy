package groovy.book.chap09

// 9.2 Closures, Collections, and Strings

// Illustrations of the method each and a closure
[1, 2, 3, 4].each { println it }

['Ken': 21, 'John': 22, 'Sally': 25].each { println it }
['Ken': 21, 'John': 22, 'Sally': 25].each { println "${it.key} maps to: ${it.value}" }

'Ken'.each { println it }
