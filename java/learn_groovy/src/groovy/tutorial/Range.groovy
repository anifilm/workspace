package groovy.tutorial

// Ranges represent a range of values in shorthand notation
def oneTo10 = 1..10
def aToZ = 'a'..'z'
def zToA = 'z'..'a'

println oneTo10
println aToZ
println zToA

// Get size
println 'Size ' + oneTo10.size() // 10

// get index
println '2nd Item ' + oneTo10.get(1) // 2

// Check if range contains
println 'Contains 11 ' + oneTo10.contains(11) // false

// Get item
println 'Get First ' + oneTo10.getFrom() // 1
println 'Get Last ' + oneTo10.getTo() // 10
