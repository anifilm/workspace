package groovy.book.chap15

// 15.1 Unit Testing

class Book {
    def catalogNumber
    def title
    def author

    String toString() {
        return "Book: ${catalogNumber}: ${title} by: ${author}"
    }
}

// create the Book under test
def bk1 = new Book(catalogNumber: '111', title: 'Groovy', author: 'Ken')

// test the method toString
println bk1
