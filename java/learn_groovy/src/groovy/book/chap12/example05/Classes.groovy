package groovy.book.chap12.example05

// 12.1 Classes

// lists of accounts
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

    //def toString() { // see also next example
    String toString() {
        return "Account: ${number} with balance: ${balance}"
    }
}

// create a new instance
def acc1 = new Account(number: 'ABC123', balance: 1200)
def acc2 = new Account(number: 'PQR456', balance: 200)
def acc3 = new Account(number: 'XYZ789', balance: 123)

// populate a list with the instances
def accounts = [acc1, acc2, acc3]

// now display each
accounts.each { acc ->
    println acc.toString()
}
