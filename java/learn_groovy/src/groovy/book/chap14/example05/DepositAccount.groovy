package groovy.book.chap14.example05

class DepositAccount extends Account {
    def interestRate

    String toString() {
        return "Deposit " + super.toString() + "; interest: ${interestRate}"
    }
}
