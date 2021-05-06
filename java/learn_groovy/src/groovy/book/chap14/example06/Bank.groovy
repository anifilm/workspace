package groovy.book.chap14.example06

class Bank {
    def name
    def accounts = [:]

    def openAccount(account) {
        accounts[account.number] = account
    }
}
