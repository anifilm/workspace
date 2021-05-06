package groovy.book.chap14.example02

// 14.1 Inheritance

// Class inheritance

// populate a list with the instances
def accounts = [
    new Account(number: 'AAA111', balance: 1000),
    new CurrentAccount(number: 'BBB222', balance: 2000, overdraftLimit: 400),
    new CurrentAccount(number: 'CCC333', balance: 3000, overdraftLimit: 800)
]

// now display each
accounts.each { acc ->
    println acc // automatically call toString
}
