package groovy.book.chap11

// 11.1 Interation 1: Specification and Map Implementation

// A Library application its methods
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

def readNumberBorrowedBooks(library, borrowerName) {
    // get a List of each List of ther borrower names from the library
    def borrowerNames = library.values().asList()

    // create a single List of ther borrower names
    borrowerNames = borrowerNames.flatten()

    // return the number of borrower names in the List
    return  borrowerNames.count(borrowerName)
}

def readNumberBorrowers(library, bookTitle) {
    return library[bookTitle].size()
}

// A Library application the first test case
// Initialize the loan stock
def library = [
    'Groovy': ['Ken', 'John'],
    'OOD': ['Ken'],
    'Java': ['John', 'Sally'],
    'UML': ['Sally'],
    'Basic': []
]

// Test Case: Display loan stock
println 'Test Case: Display loan stock'
displayLoanStock(library)

// A Library application the second test case
// Test Case: Add a new book
println 'Test Case: Add a new book'
addBook(library, 'C#')
displayLoanStock(library)

// Test Case: Remove a book
println 'Test Case: Remove a book'
removeBook(library, 'UML')
displayLoanStock(library)

// Test Case: Record a book loan to a borrower
println 'Test Case: Record a book loan to a borrower'
lendBook(library, 'Java', 'Ken')
displayLoanStock(library)

// Test Case: Display the number of books on loan to a borrower
println 'Test Case: Display the number of books on loan to a borrower'
println "Number of books on loan to Ken: ${readNumberBorrowedBooks(library, 'Ken')} \n"

// Test Case: Display the number of borrowers of a book
println 'Test Case: Display the number of borrowers of a book'
println "Number of borrowers of Java: ${readNumberBorrowers(library, 'Java')} \n"
