package groovy.book.chap14.example03

class CurrentAccount extends Account {
    def overdraftLimit

    String toString() {
        return "Current " + super.toString() + "; overdraft: ${overdraftLimit}"
    }
}
