package groovy.tutorial

// While loop
def i = 0;
while (i < 10) {
    // If i is odd skip back to the beginning of the loop
    if (i % 2) {
        i++
        continue;
    }
    // If i equals 8 stop looping
    if (i == 8) {
        break
    }
    print i + ' '
    i++;
}
println()

// Normal for loop
for (i = 0; i < 5; i++) {
    print i + ' '
}
println()

// for loop with a range
for (j in 2..6) {
    print j + ' '
}
println()

// for loop with a list (Same with string)
def randList = [10, 12, 13, 14]
for (j in randList) {
    print j + ' '
}
println()

def str = 'Hello World!'
for (s in str) {
    print s + ' '
}
println()

// for loop with a map
def custs = [
    100: 'Paul',
    101: 'Sally',
    102: 'Sue',
]

for (cust in custs) {
    println "$cust.value: $cust.key"
}
