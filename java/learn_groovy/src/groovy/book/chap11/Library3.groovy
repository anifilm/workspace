package groovy.book.chap11

import groovy.book.console.*

// 11.3 Interation 3: Implementation with Closures

// A Library application a recoded version

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
    return borrowerNames.count(borrowerName)
}

def getNumberBorrowers(library, bookTitle) {
    return library[bookTitle].size()
}

def getBorrowers(library, bookTitle) {
    return library[bookTitle]
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
    println '8: Display borrowers of book'

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

def doAddBook = { addBook(library, readBookTitle()) }

def doRemoveBook = { removeBook(library, readBookTitle()) }

def doLendBook = { lendBook(library, readBookTitle(), readBorrowerName()) }

def doReturnBook = { returnBook(library, readBookTitle(), readBorrowerName()) }

def doDisplayLoanStock = { displayLoanStock(library) }

def doDisplayNumberBooksOnLoanToBorrower = {
    def count = getNumberBorrowedBooks(library, readBorrowerName())
    println "\nNumber of books borrowed: ${count}\n"
}

def doDispalyNumberBorrowersOfBook = {
    def count = getNumberBorrowers(library, readBookTitle())
    println "\nNumber of borrowers: ${count}\n"
}

def doDisplayBorrowersOfBook = {
    def borrowerNames = getBorrowers(library, readBookTitle())
    println "\nBorrowers: ${borrowerNames.sort()}\n"
}

def menu = [
    '1': doAddBook,
    '2': doRemoveBook,
    '3': doLendBook,
    '4': doReturnBook,
    '5': doDisplayLoanStock,
    '6': doDisplayNumberBooksOnLoanToBorrower,
    '7': doDispalyNumberBorrowersOfBook,
    '8': doDisplayBorrowersOfBook
]

def choice = readMenuSelection()

while (choice != '0') {
    menu[choice].call()
    choice = readMenuSelection()
}

println '\nSystem closing\n'
