#include <iostream>
#include "Account_Util.h"

// Display Account objects in a vector of Account objects
void display(const std::vector<Account*>& accounts) {
    std::cout << "\n=== Accounts ================================================" << std::endl;
    for (const auto acc : accounts)
        std::cout << *acc << std::endl;
}

// Deposits supplied amount to each Account object in the vector
void deposit(std::vector<Account*>& accounts, double amount) {
    std::cout << "\n=== Depositing to Accounts ==================================" << std::endl;
    for (auto acc : accounts) {
        if (acc->deposit(amount))
            std::cout << "Deposited " << amount << " to " << *acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << *acc << std::endl;
    }
}

// Withdraw amount from each Account object in the vector
void withdraw(std::vector<Account*>& accounts, double amount) {
    std::cout << "\n=== Withdrawing from Accounts ===============================" << std::endl;
    for (auto acc : accounts) {
        if (acc->withdraw(amount))
            std::cout << "Withdraw " << amount << " from " << *acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    }
}

// Helper functions for Saving Account class

// Display Saving Account objects in a vector of Saving Account objects
// void display(const std::vector<Savings_Account>& accounts) {
//     std::cout << "\n=== Saving Accounts =========================================" << std::endl;
//     for (const auto &acc: accounts)
//         std::cout << acc << std::endl;
// }

// Deposits suppled amount to each Savings Account objects in the vector
// void deposit(std::vector<Savings_Account>& accounts, double amount) {
//     std::cout << "\n=== Depositing to Savings Accounts ==========================" << std::endl;
//     for (auto &acc: accounts) {
//         if (acc.deposit(amount))
//             std::cout << "Deposited " << amount << " to " << acc << std::endl;
//         else
//             std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
//     }
// }

// Withdraw supplied amount from each Saving Account object in the vector
// void withdraw(std::vector<Savings_Account>& accounts, double amount) {
//     std::cout << "\n=== Withdrawing from Saving Accounts ========================" << std::endl;
//     for (auto &acc: accounts) {
//         if (acc.withdraw(amount))
//             std::cout << "Withdraw " << amount << " from " << acc << std::endl;
//         else
//             std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
//     }
// }

// Helper functions for Checking Account class

// Display Checking Account objects in a vector of Checking Account objects
// void display(const std::vector<Checking_Account>& accounts) {
//     std::cout << "\n=== Checking Accounts =======================================" << std::endl;
//     for (const auto &acc: accounts)
//         std::cout << acc << std::endl;
// }

// Deposits suppled amount to each Checking Account objects in the vector
// void deposit(std::vector<Checking_Account>& accounts, double amount) {
//     std::cout << "\n=== Depositing to Checking Accounts =========================" << std::endl;
//     for (auto &acc: accounts) {
//         if (acc.deposit(amount))
//             std::cout << "Deposited " << amount << " to " << acc << std::endl;
//         else
//             std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
//     }
// }

// Withdraw supplied amount from each Checking Account object in the vector
// void withdraw(std::vector<Checking_Account>& accounts, double amount) {
//     std::cout << "\n=== Withdrawing from Checking Accounts ======================" << std::endl;
//     for (auto &acc: accounts) {
//         if (acc.withdraw(amount))
//             std::cout << "Withdraw " << amount << " from " << acc << std::endl;
//         else
//             std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
//     }
// }

// Helper functions for Trust Account class

// Display Trust Account objects in a vector of Trust Account objects
// void display(const std::vector<Trust_Account>& accounts) {
//     std::cout << "\n=== Trust Accounts ==========================================" << std::endl;
//     for (const auto &acc: accounts)
//         std::cout << acc << std::endl;
// }

// Deposits suppled amount to each Trust Account objects in the vector
// void deposit(std::vector<Trust_Account>& accounts, double amount) {
//     std::cout << "\n=== Depositing to Trust Accounts ============================" << std::endl;
//     for (auto &acc: accounts) {
//         if (acc.deposit(amount))
//             std::cout << "Deposited " << amount << " to " << acc << std::endl;
//         else
//             std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
//     }
// }

// Withdraw supplied amount from each Trust Account object in the vector
// void withdraw(std::vector<Trust_Account>& accounts, double amount) {
//     std::cout << "\n=== Withdrawing from Trust Accounts =========================" << std::endl;
//     for (auto &acc: accounts) {
//         if (acc.withdraw(amount))
//             std::cout << "Withdraw " << amount << " from " << acc << std::endl;
//         else
//             std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
//     }
// }
