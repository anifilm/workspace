package groovy.book.chap14.example06

abstract class Account {
    def number
    def balance

    String toString() { // redefinition
        return "Account: ${number}; balance: ${balance}"
    }

    def abstract isOverdrawn() // deferred method
}
