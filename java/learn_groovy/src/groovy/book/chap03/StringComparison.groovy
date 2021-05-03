package groovy.book.chap03

// 3.5 String Comparison
println 'ken' <=> 'ken'     // 0   same
println 'ken' <=> 'kenneth' // −1  before
println 'ken' <=> 'Ken'     // 1   after
println 'ken'.compareTo('Ken') // > 0  after
