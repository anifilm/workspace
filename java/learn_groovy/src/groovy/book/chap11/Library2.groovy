package groovy.book.chap11

import groovy.book.console.*

// 11.2 Interation 2: Implementation of a Text-based User Interface

// A Library application additional methods and control structures

def addBook(library, bookTitle) {
    library[bookTitle] = []
}

def removeBook(library, bookTitle) {
    library.remove(bookTitle)
}

def lendBook(library, bookTitle, borrowerName) {
    library[bookTitle] << borrowerName
}

def returnBook(library, bookTitle, borrowerName) {
    library[bookTitle].remove(borrowerName)
}

def displayLoanStock(library) {
    println "Library stock: ${library} \n"
}

def getNumberBorrowedBooks(library, borrowerName) {
    // get a List of each List of ther borrower names from the library
    def borrowerNames = library.values().asList()

    // create a single List of ther borrower names
    borrowerNames = borrowerNames.flatten()

    // return the number of borrower names in the List
    return  borrowerNames.count(borrowerName)
}

def getNumberBorrowers(library, bookTitle) {
    return library[bookTitle].size()
}

// methods as shown previously
//

def readBookTitle() {
    print '\tEnter book title: '
    return Console.readLine()
}

def readBorrowerName() {
    print '\tEnter borrower name: '
    return Console.readLine()
}

def readMenuSelection() {
    println ''
    println '0: Quit'
    println '1: Add new book'
    println '2: Remove book'
    println '3: Lend a book'
    println '4: Return a book'
    println '5: Display loan stock'
    println '6: Display number of books on loan to a borrower'
    println '7: Display number of borrowers of book'

    print '\n\tEnter choice: '
    return Console.readLine()
}

def library = [
    'Groovy': ['Ken', 'John'],
    'OOD'   : ['Ken'],
    'Java'  : ['John', 'Sally'],
    'UML'   : ['Sally'],
    'Basic' : []
]

def choice = readMenuSelection()

while (choice != '0') {
    if (choice == '1')
        addBook(library, readBookTitle())
    else if (choice == '2')
        removeBook(library, readBookTitle())
    else if (choice == '3')
        lendBook(library, readBookTitle(), readBorrowerName())
    else if (choice == '4')
        returnBook(library, readBookTitle(), readBorrowerName())
    else if (choice == '5')
        displayLoanStock(library)
    else if (choice == '6') {
        def count = getNumberBorrowedBooks(library, readBorrowerName())
        println "\nNumber of books borrwed: ${count}\n"
    } else if (choice == '7') {
        def count = getNumberBorrowers(library, readBookTitle())
        println "\nNumber of borrowers: ${count}\n"
    } else
        println '\nUnknown selection\n'

    // next selection
    choice = readMenuSelection()
}

println '\nSystem closing\n'
