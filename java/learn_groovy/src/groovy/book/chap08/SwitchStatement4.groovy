package groovy.book.chap08

// 8.4 Switch Statement

// List case expressions
def number = 32

switch (number) {
    case [21, 22, 23, 24]:
        println 'number is a twenty something'
        break
    case [31, 32, 33, 34]:
        println 'number is a thirty something'
        break
    default:
        println 'number type is unknown'
}
