package groovy.book.chap14.example06

class DepositAccount extends Account {
    def interestRate

    String toString() {
        return "Deposit " + super.toString() + "; interest: ${interestRate}"
    }

    def isOverdrawn() { // redefinition
        return balance < 0
    }
}
