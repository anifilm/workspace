package groovy.book.chap14.example04

class Account {
    def number
    def balance

    String toString() { // redefinition
        return "Account: ${number}; balance: ${balance}"
    }
}
