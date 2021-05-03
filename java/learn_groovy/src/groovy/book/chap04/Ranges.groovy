package groovy.book.chap04

// 4.5 Ranges
1900..1999  // twentieth century (inclusive Range)
2000..<2100 // twenty-first century (exclusive Range)
'A'..'D'    // A, B, C, and D
10..1       // 10, 9, ..., 1
'Z'..'X'    // Z, Y, and X

def start = 10
def finish = 20
start..finish + 1 // [10, 11, 12, ..., 20, 21]

def twentiethCentury = 1900..1999  // Range literal
def reversedTen = 10..1            // Reversed Range
println twentiethCentury.size()    // 100
println twentiethCentury.get(0)    // 1900
println twentiethCentury.getFrom() // 1900
println twentiethCentury.getTo()   // 1999
println twentiethCentury.contains(2000) // false
println twentiethCentury.subList(0, 5)  // 1900..1904
println reversedTen[2]             // 8
println reversedTen.isReverse()    // true
