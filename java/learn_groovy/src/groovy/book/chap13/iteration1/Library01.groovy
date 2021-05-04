package groovy.book.chap13.iteration1

// 13.2 Interation 1: An Initial Model

// Initial object configuration
class Book {
    def catalogNumber
    def title
    def author

    String toString() { // redefinition
        return "Book: ${catalogNumber}: ${title} by: ${author}"
    }
}

class Library {
    def name
    def loanStock = [:]

    def addBook(bk) {
        loanStock[bk.catalogNumber] = bk
    }

    def displayStock() {
        println "Library02: ${name}"
        println "================"

        loanStock.each { catalogNumber, book -> println " ${book}" }
    }
}

/* Create a library object */
def lib = new Library(name: 'Dunning')

// Create some books...
def bk1 = new Book(catalogNumber: '111', title: 'Groovy', author: 'Ken')
def bk2 = new Book(catalogNumber: '222', title: 'OOD', author: 'Ken')
def bk3 = new Book(catalogNumber: '333', title: 'UML', author: 'John')

// ... add them to the loan stock
lib.addBook(bk1)
lib.addBook(bk2)
lib.addBook(bk3)

// See stock
lib.displayStock()
