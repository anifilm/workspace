package groovy.book.chap14.example07

class CurrentAccount extends AccountAB {
    def overdraftLimit

    String toString() {
        return "Current " + super.toString() + "; overdraft: ${overdraftLimit}"
    }

    def isOverdrawn() { // redefinition
        return balance < -overdraftLimit
    }
}
