package groovy.book.chap05

// 5.2 Formatted Output
// printf(String format, ListImplementation values)

printf('My name is Ken', [])
printf('My name is Ken\n', [])

def a = 10
def b = 15
printf('The sum of %d and %d is %d\n', [a, b, a + b])

def x = 1.234
def y = 56.78
printf('%f from %f gives %f\n', [y, x, x - y])

printf('[%s]\n', ["Hello there"])
printf('[%20s]\n', ["Hello there"])
printf('[%-20s]\n', ["Hello there"])
