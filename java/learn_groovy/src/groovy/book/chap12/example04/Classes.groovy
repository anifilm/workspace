package groovy.book.chap12.example04

// 12.1 Classes

// Using the implicit getter and setter methods
class Account {
    def number  // account number
    def balance // current balance

    def credit(amount) {
        balance += amount
    }

    def debit(amount) { // only of there are sufficient funds
        if (balance >= amount)
            balance -= amount
    }

    def display() {
        println "Account: ${number} with balance: ${balance}"
    }
}

// create a new instance
def acc = new Account(number: 'ABC123', balance: 1200)
acc.display()

// credit transaction
acc.credit(200) // balance now 1400
acc.display()

// other transactions
acc.debit(900) // balance now 500
acc.debit(700) // balance remains unchanged at 500
acc.display()
