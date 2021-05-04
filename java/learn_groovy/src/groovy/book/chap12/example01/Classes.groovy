package groovy.book.chap12.example01

// 12.1 Classes

// A simple Groovy class
class Account {
    def number  // account number
    def balance // current balance
}

// create a new Account instance
def acc = new Account(number: 'ABC123', balance: 1200)

// display its state values
println "Account ${acc.number} has balance ${acc.balance}"
