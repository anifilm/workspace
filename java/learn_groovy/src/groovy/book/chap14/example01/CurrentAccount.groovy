package groovy.book.chap14.example01

class CurrentAccount {
    def number
    def balance
    def overdraftLimit

    String toString() {
        return "Current Account: ${number}; balance: ${balance}; overdraft: ${overdraftLimit}"
    }
}
