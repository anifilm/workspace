package groovy.book.chap12.example03

// 12.1 Classes

// Using the implicit getter and setter methods
class Account {
    def number  // account number
    def balance // current balance
}
// create two instances
def acc1 = new Account(number: 'ABC123', balance: 1200)
def acc2 = new Account(number: 'XYZ888', balance: 400)

// access the state using properties
println "Account ${acc1.number} has balance ${acc1.balance}"

// access the state using getters
println "Account ${acc2.getNumber()} has balance ${acc2.getBalance()}"

// modify the state using a property
acc1.balance = 200
println "Account ${acc1.getNumber()} has balance ${acc1.getBalance()}"

// modify the state using a setter
acc2.setBalance(600)
println "Account ${acc2.number} has balance ${acc2.balance}"
