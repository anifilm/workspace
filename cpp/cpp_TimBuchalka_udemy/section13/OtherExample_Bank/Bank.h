// Header ==> Function Declarations
#ifndef _BANK_H_
#define _BANK_H_
#include <iostream>
#include <string>

class Bank {
private:
    // Member variables
    std::string name;
    int accountNumber;
    double balance;

    static int totalAccounts;
    static double bankBalance;

public:
    Bank(std::string = "None", int accountNumber = 0, double balance = 0);
    // Copy Constructor
    Bank(const Bank& source);
    // Destructor
    ~Bank();

    // Accessor Functions
    std::string getName() const { return name; }
    int getAccountNumber() const { return accountNumber; }
    double getBalance() const { return balance; }

    // Mutator Functions
    void setName(std::string name) { this->name = name; }
    void setAccountNumber(int accountNumber) { this->accountNumber = accountNumber; }
    void setBalance(double balance) { this->balance = balance; bankBalance += balance; }

    void withdraw(double);
    void deposit(double);

    static void printBankInfo();
};

#endif // _BANK_H_
