package groovy.book.chap13.iteration3

import groovy.book.console.*
import org.fusesource.jansi.internal.CLibrary

// 13.4 Interation 3: Reinstate the User Interface

// Text-based menu

// The Book and Borrower classes are unchanged from the previous iteration
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

class Action {
    def library

    def addBook() {
        print '\nEnter book catalog number: '
        def catalogNumber = Console.readLine()
        print 'Enter book title: '
        def title = Console.readLine()
        print 'Enter book author: '
        def author = Console.readLine()

        def bk = new Book(catalogNumber: catalogNumber, title: title, author: author)

        library.addBook(bk)
    }

    def displayStock() {
        println "\n\nLibrary: ${library.name}"
        println "================"

        library.loanStock.each { catalogNumber, book -> println " ${book}" }
    }

    def displayBookAvailableForLoan() {
        println "\n\nLibrary: ${library.name}: Available for loan"
        println "================"

        library.loanStock.each { catalogNumber, book -> if (book.borrower != null) println " ${book}" }
    }

    def displayBooksOnLoan() {
        println "\n\nLibrary: ${library.name}: On loan"
        println "================"

        library.loanStock.each { catalogNumber, book -> if (book.borrower != null) println " ${book}" }
    }

    def registerBorrower() {
        print '\nEnter borrower membership number: '
        def membershipNumber = Console.readLine()
        print 'Enter borrower name: '
        def name = Console.readLine()

        def bor = new Borrower(membershipNumber: membershipNumber, name: name)

        library.registerBorrower(bor)
    }

    def displayBorrowers() {
        println "\n\nLibrary: ${library.name}: Borrower details"
        println "================"

        library.borrowers.each { membershipNumber, borrower ->
            println borrower
            borrower.borrowedBooks.each { catalogNumber, book -> println " ${book}"}
        }
    }

    def lendBook() {
        print '\nEnter book catalog number: '
        def catalogNumber = Console.readLine()
        print 'Enter borrower membershop number: '
        def membershipNumber = Console.readLine()

        library.lendBook(catalogNumber, membershipNumber)
    }

    def returnBook() {
        print '\nEnter book catalog number: '
        def catalogNumber = Console.readLine()

        library.returnBook(catalogNumber)
    }
}

def readMenuSelection() {
    println ''
    println '0: Quit'
    println '1: Add new book'
    println '2: Display stock'
    println '3: Display books available for loan'
    println '4: Display books on loan'
    println '5: Register new borrower'
    println '6: Display borrowers'
    println '7: Lend one book'
    println '8: Return one book'

    print '\n\tEnter choice: '
    return Console.readLine()
}

// make the Action object
def action = new Action(library: new Library(name: 'Dunning'))

// make first selection
def choice = readMenuSelection()

while (choice != '0') {
    if (choice == '1')      // Add new book
        action.addBook()
    else if (choice == '2') // Display stock
        action.displayStock()
    else if (choice == '3') // Display books available for loan
        action.displayBookAvailableForLoan()
    else if (choice == '4') // Display books on loan
        action.displayBooksOnLoan()
    else if (choice == '5') // Register new borrower
        action.registerBorrower()
    else if (choice == '6') // Display borrowers
        action.displayBorrowers()
    else if (choice == '7') // Lend one book
        action.lendBook()
    else if (choice == '8') // Return one book
        action.returnBook()
    else
        println '\nUnknown selection\n'

    // next selection
    choice = readMenuSelection()
}

println '\nSystem closing\n'
