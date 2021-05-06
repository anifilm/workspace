package groovy.book.chap14.example05

class Bank {
    def name
    def accounts = [:]

    def openAccount(account) {
        accounts[account.getNumber()] = account
    }
}
