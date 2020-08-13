#include <iostream>
#include "Account.h"

void Account::deposit(double amount) {
    std::cout << "Account deposit called with " << amount << std::endl;
}

void Account::withdraw(double amount) {
    std::cout << "Account withdraw called with " << amount << std::endl;
}

Account::Account()
    : balance {0.0}, name {"An Account"} {
}

Account::~Account() {
}