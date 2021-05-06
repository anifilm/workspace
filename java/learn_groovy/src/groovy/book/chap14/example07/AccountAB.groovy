package groovy.book.chap14.example07

abstract class AccountAB implements AccountIF {
    def number
    def balance

    String toString() { // redefinition
        return "Account: ${number}; balance: ${balance}"
    }

    def isOverdrawn() { // redefinition
        return balance < 0
    }
}
