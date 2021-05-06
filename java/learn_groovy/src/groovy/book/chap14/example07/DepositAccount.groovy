package groovy.book.chap14.example07

class DepositAccount extends AccountAB {
    def interestRate

    String toString() {
        return "Deposit " + super.toString() + "; interest: ${interestRate}"
    }
}
