package groovy.book.chap12.example02

// 12.1 Classes

// Two object instances
class Account {
    def number  // account number
    def balance // current balance
}

// create two instances
def acc1 = new Account(number: 'ABC123', balance: 1200)
def acc2 = new Account(number: 'XYZ888', balance: 400)

// report on both
println "Account ${acc1.number} has balance ${acc1.balance}"
println "Account ${acc2.number} has balance ${acc2.balance}"
