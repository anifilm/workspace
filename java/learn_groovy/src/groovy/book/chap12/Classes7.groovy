package groovy.book.chap12

// 12.1 Classes

// A constructor method
class Account7 {
    def number  // account number
    def balance // current balance

    def Account7(number, balance) { // constructor method
        this.number = number
        this.balance = balance
    }

    def credit(amount) {
        balance += amount
    }

    def debit(amount) { // only of there are sufficient funds
        if (balance >= amount)
            balance -= amount
    }

    String toString() { // redefinition
        return "Account: ${number} with balance: ${balance}"
    }
}

// populate a list with the instances
def accounts = [
    new Account7('ABC123', 1200),
    new Account7('PQR456', 200),
    new Account7('XYZ789', 123)
]

// now display each
accounts.each { acc ->
    println acc // automacally cal toString
}

//def acc = new Account7(number: 'ABC123', balance: 1200) // No matching constructor
