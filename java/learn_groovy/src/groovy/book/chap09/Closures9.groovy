package groovy.book.chap09

// 9.2 Closures, Collections, and Strings

// Conditional elements
// even values only
[1, 2, 3, 4].each { num -> if (num % 2 == 0) println num }

// staff at least 25 years old
['Ken': 21, 'John': 22, 'Sally': 25].each { staff ->
    if (staff.value >= 25) println staff.key
}
['Ken': 21, 'John': 22, 'Sally': 25].each { staffName, staffAge ->
    if (staffAge >= 25) println staffName
}

// only lowercase letters
'Ken'.each { letter -> if (letter >= 'a' && letter <= 'z') println letter }
