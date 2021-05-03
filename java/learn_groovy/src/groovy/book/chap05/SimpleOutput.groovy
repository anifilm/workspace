package groovy.book.chap05

// 5.1 Simple Output
print "My name is"
print("Ken")
println()

println "My first program"
println("This is fun")

def age = 25
print "My age is: "
println age
println "My age is: ${age}"

def numbers = [11, 12, 13, 14]
def staffTel = ['Ken': 2745, 'John': 2746, 'Jessie': 2772]
println "Numbers: ${numbers}"
println "Staff telephones: ${staffTel}"
