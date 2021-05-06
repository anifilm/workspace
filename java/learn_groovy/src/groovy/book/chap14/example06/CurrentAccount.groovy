package groovy.book.chap14.example06

class CurrentAccount extends Account {
    def overdraftLimit

    String toString() {
        return "Current " + super.toString() + "; overdraft: ${overdraftLimit}"
    }

    def isOverdrawn() { // redefinition
        return balance < -overdraftLimit
    }
}
