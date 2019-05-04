#include "Bank.h"

// Static Member Variables
int Bank::totalAccounts = 0;
double Bank::bankBalance = 10000;

Bank::Bank(std::string newName, int newAccountNumber, double newBalance)
    : name {newName}, accountNumber {newAccountNumber}, balance {newBalance} {

    totalAccounts++;
    bankBalance += newBalance;
}

Bank::Bank(const Bank &source)
    : Bank {source.name, source.accountNumber, source.bankBalance} {
}

Bank::~Bank() {
    totalAccounts--;
    bankBalance -= balance;
}

void Bank::withdraw(double withdraw) {
    balance -= withdraw;
    bankBalance -= withdraw;
}

void Bank::deposit(double deposit) {
    balance += deposit;
    bankBalance += deposit;
}

void Bank::printBankInfo() {
    std::cout << "\nNumber of Accounts: " << totalAccounts << std::endl;
    std::cout << "Total Balance: " << bankBalance << std::endl;
    std::cout << std::endl;
}