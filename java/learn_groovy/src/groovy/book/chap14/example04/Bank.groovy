package groovy.book.chap14.example04

class Bank {
    def name
    def accounts = [:]

    def openAccount(account) {
        accounts[account.getNumber()] = account
    }
}
