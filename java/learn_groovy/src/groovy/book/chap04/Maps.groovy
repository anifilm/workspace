package groovy.book.chap04

/* Map literals
['Ken': 'Braclay', 'John': 'Savage']  Forename/surename collection
[4: [2], 6: [3, 2], 12: [6, 4, 3, 2]] Integer keys and their list of divisors
[:]                                   Empty Map
 */

// 4.3 Maps
def x = 1
def y = 2
def m = [x: y, y: x]
println m

m = ['x': 2, 'y': 1]
println m

def names = ['Ken': 'Braclay', 'John': 'Savage']
def divisors = [4: [2], 6: [3, 2], 12: [6, 4, 3, 2]]
println names['Ken'] // "Braclay"
println names.Ken    // "Braclay"
println names['Jessie'] // null
println divisors[6]  // [3, 2]

divisors[6] = [6, 3, 2, 1] // [4: [2], 6: [6, 3, 2, 1], 12: [6, 4, 3, 2]]
println divisors

def careful = [1: 'Ken', '1': 'Braclay']
println careful[1]   // "Ken"
println careful['1'] // "Barclay"
