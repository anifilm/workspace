package groovy.book.chap14.example03

// 14.2 Inherited Methods

// Inherited features

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

def ca = new CurrentAccount(number: 'DDD444', balance: 4000, overdraftLimit: 1200)

// use methods and inherited methdos
println "Overdraft: ${ca.overdraftLimit}"
println "Number: ${ca.number}"

def ac = new Account(number: 'EEE555', balance: 1234)

println "Number: ${ac.number}"              // OK
//println "Overdraft: ${ac.overdraftLimit}" // ERROR: no such property
