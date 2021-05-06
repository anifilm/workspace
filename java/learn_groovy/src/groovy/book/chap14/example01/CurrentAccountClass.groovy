package groovy.book.chap14.example01

// 14.1 Inheritance

// CurrentAccount class

// populate a list with the instances
def accounts = [
    new CurrentAccount(number: 'AAA111', balance: 1000, overdraftLimit: 400),
    new CurrentAccount(number: 'BBB222', balance: 2500, overdraftLimit: 800)
]

// now display each
accounts.each { acc ->
    println acc // automatically call toString
}
