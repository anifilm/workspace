package groovy.tutorial

// The basic integer math operators
println '5 + 4 = ' + (5 + 4)
println '5 - 4 = ' + (5 - 4)
println '5 * 4 = ' + (5 * 4)
println '5 / 4 = ' + (5.intdiv(4))
println '5 % 4 = ' + (5 % 4)

// Floating point math operators
println '5.2 + 4.4 = ' + (5.2.plus(4.4))
println '5.2 - 4.4 = ' + (5.2.minus(4.4))
println '5.2 * 4.4 = ' + (5.2.multiply(4.4))
println '5.2 / 4.4 = ' + (5.2 / 4.4)

// Order of operations
println '3 + 2 * 5 = ' + (3 + 2 * 5)
println '(3 + 2) * 5 = ' + ((3 + 2) * 5)

// Increment and decrement
def age = 40;
println 'age++ = ' + (age++)
println '++age = ' + (++age)
println 'age-- = ' + (age--)
println '--age = ' + (--age)

// Largest values
println("Biggest Int " + Integer.MAX_VALUE);
println("Smallest Int " + Integer.MIN_VALUE);

println("Biggest Float " + Float.MAX_VALUE);
println("Smallest Float " + Float.MIN_VALUE);

println("Biggest Double " + Double.MAX_VALUE);
println("Smallest Double " + Double.MIN_VALUE);

// Decimal Accuracy
println '1.1000000000000001 + 1.1000000000000001 = ' + (1.1000000000000001111111111111111111111111111111111111 + 1.1000000000000001111111111111111111111111111111111111)
