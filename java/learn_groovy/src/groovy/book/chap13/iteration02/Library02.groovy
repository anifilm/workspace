package groovy.book.chap13.iteration02

// 13.3 Interation 2: Augment the Model

// Borrowers
class Book {
    def catalogNumber
    def title
    def author
    def borrower = null

    def attachBorrower(borrower) {
        this.borrower = borrower
    }

    def detachBorrower() {
        borrower = null
    }

    String toString() { // redefinition
        return "Book: ${catalogNumber}: ${title} by: ${author}"
    }
}

class Borrower {
    def membershipNumber
    def name
    def borrowedBooks = [:]

    def attachBook(bk) {
        borrowedBooks[bk.catalogNumber] = bk
        bk.attachBorrower(this)
    }

    def detachBook(bk) {
        borrowedBooks.remove(bk.catalogNumber)
        bk.detachBorrower()
    }

    String toString() {
        return "Borrower: ${membershipNumber}; ${name}"
    }
}

class Library {
    def name
    def loanStock = [:]
    def borrowers = [:]

    def addBook(bk) {
        loanStock[bk.catalogNumber] = bk
    }

    def displayStock() {
        println "\n\nLabrary: ${name}"
        println "================"

        loanStock.each { catalogNumber, book -> println " ${book}" }
    }

    def displayBooksAvailableForLoan() {
        println "\n\nLibrary: ${name}: Available for loan"
        println "================"

        loanStock.each { catalogNumber, book -> if (book.borrower == null) println " ${book}" }
    }

    def displayBooksOnLoan() {
        println "\n\nLibrary: ${name}: On loan"
        println "================"

        loanStock.each { catalogNumber, book -> if (book.borrower == null) println " ${book}" }
    }

    def registerBorrower(borrower) {
        borrowers[borrower.membershipNumber] = borrower
    }

    def displayBorrowers() {
        println "\n\nLibrary: ${name}: Borrower details"
        println "================"

        borrowers.each { membershipNumber, borrower ->
            println borrower
            borrower.borrowedBooks.each { catalogNumber, book -> println " ${book}" }
        }
    }

    def lendBook(catalogNumber, membershipNumber) {
        def loanStockEntry = loanStock.find { entry -> entry.key == catalogNumber }
        def borrowersEntry = borrowers.find { entry -> entry.key == membershipNumber }
        borrowersEntry.value.attachBook(loanStockEntry.value)
    }

    def returnBook(catalogNumber) {
        def loanStackEntry = loanStock.find { entry -> entry.key == catalogNumber }
        def bor = loanStackEntry.value.borrower
        bor.detachBook(loanStackEntry.value)
    }
}

// Create a library object
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

// Now introduce some borrowers
bo1 = new Borrower(membershipNumber: '1234', name: 'Jessie')

bo2 = new Borrower(membershipNumber: '5678', name: 'Sally')

lib.registerBorrower(bo1)
lib.registerBorrower(bo2)

// See borrowers
lib.displayBorrowers()

// Finally, make some transactions
lib.displayBooksAvailableForLoan()

lib.lendBook('111', '1234')

lib.displayBooksAvailableForLoan()
lib.displayBooksOnLoan()
lib.displayBorrowers()

lib.returnBook('111')

lib.displayBooksAvailableForLoan()
lib.displayBooksOnLoan()
lib.displayBorrowers()
