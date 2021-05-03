package groovy.book.chap03

// 3.6 Regular Expressions
def regex = ~'cheese'
println 'cheesecake' =~ 'cheese'
println !('cheesecake' =~ 'fromage')
println 'cheesecake' =~ regex

println 'cheesecake' ==~ 'cheese'

def rhyme = 'Humpty Dumpty sat on a wall'
println rhyme =~ '^Humpty' // true
println rhyme =~ 'wall$'   // true

println 'aaaaab' =~ 'a*b'
println 'b' =~ 'a*b'
println 'aaacd' =~ 'a*c?d'
println 'aaad' =~ 'a*c?d'
println 'aaaaab' =~ 'a{5}b'
println !('aab' =~ 'a{5}b')
