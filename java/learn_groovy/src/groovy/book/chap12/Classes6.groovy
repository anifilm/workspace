package groovy.book.chap12

// 12.1 Classes

// Redefining method toString
class Account6 {
    def number  // account number
    def balance // current balance

    def credit(amount) {
        balance += amount
    }

    def debit(amount) { // only of there are sufficient funds
        if (balance >= amount)
            balance -= amount
    }

    String toString() { // see also next example
        return "Account: ${number} with balance: ${balance}"
    }
}

// populate a list with the instances
def accounts = [
    new Account6(number: 'ABC123', balance: 1200),
    new Account6(number: 'PQR456', balance: 200),
    new Account6(number: 'XYZ789', balance: 123)
]

// now display each
accounts.each { acc ->
    println acc // automacally cal toString
}
