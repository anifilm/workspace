package groovy.book.chap12

// 12.2 Composition

// Banking example
class Bank {
    def name           // name of bank
    def accounts = [:] // accounts opened with the bank

    def openAccount(number, balance) {
        def acc = new Account6(number: number, balance: balance)
        accounts[number] = acc
    }

    def creditAccount(number, amount) {
        def acc = this.findAccount(number)
        if (acc != null)
            acc.credit(amount)
    }

    def debitAccount(number, amount) {
        def acc = this.findAccount(number)
        if (acc != null)
            acc.debit(amount)
    }

    def getAccountBalance(number) {
        def acc = this.findAccount(number)
        return (acc == null) ? null : acc.balance
    }

    def getTotalAssets() {
        def total = 0
        accounts.each { number, account -> total += account.balance }
        return total
    }

    def findAccount(number) {
        def acc = accounts.find { entry -> entry.key == number }
        return (acc == null) ? null : acc.value
    }
}

// open new bank
def bk = new Bank(name: 'Community')

// Open new accounts
bk.openAccount('ABC123', 1200)
bk.openAccount('DEF456', 1000)
bk.openAccount('GHI789', 2000)

// Perform transactions on a particular account
bk.creditAccount('ABC123', 200) // balance now 1400
bk.debitAccount('ABC123', 900) // balance now 500
bk.debitAccount('ABC123', 700) // balance remains unchanged at 500

// Display details of this account
println "Balance for account ABC123 is: ${bk.getAccountBalance('ABC123')}"

// Calculate total bank assets
println "Total assets: ${bk.getTotalAssets()}"
