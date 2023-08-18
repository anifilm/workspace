#ifndef _CHCKING_ACCOUNT_H_
#define _CHCKING_ACCOUNT_H_
#include "Account.h"

class Checking_Account: public Account {
    friend std::ostream& operator<<(std::ostream& os, const Checking_Account& account);
private:
    static constexpr const char* def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double per_check_fee = 1.50;
public:
    Checking_Account(std::string name = def_name, double balance = def_balance);
    bool withdraw(double amount);
    // Inherits the Account::withdraw methods
};

#endif // _CHCKING_ACCOUNT_H_
