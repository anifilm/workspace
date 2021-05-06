package groovy.book.chap14.example04

// 14.4 Polymorphism

// Bank example

def displayBank(bk) {
    println "Bank: ${bk.name}"
    println "===================="

    bk.accounts.each { number, account -> println " ${account}" }
}

// create a new Bank object
def bk = new Bank(name: 'Barclay')

// create some accounts
def ca1 = new CurrentAccount(number: 'AAA111', balance: 2000, overdraftLimit: 400)
def ca2 = new CurrentAccount(number: 'BBB222', balance: 3000, overdraftLimit: 800)
def da1 = new DepositAccount(number: 'CCC333', balance: 4000, interestRate: 4)

// add them to the bank
bk.openAccount(ca1)
bk.openAccount(ca2)
bk.openAccount(da1)

// now display everthing
displayBank(bk)
