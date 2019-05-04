#include <iostream>
#include <string>
#include <vector>
#include "Bank.h"

using namespace std;

int main() {

    Bank::printBankInfo();

    cout << "Adam created an account and deposited 500" << endl;
    Bank Adam("Adam", 1, 500);

    cout << "Sarah created an account and deposited 1000" << endl;
    Bank Sarah;
    Sarah.setName("Sarah");
    Sarah.setAccountNumber(2);
    Sarah.setBalance(1000);

    Bank::printBankInfo();

    cout << "Dick created an account and depositred 1500" << endl;
    Bank Dick("Dick", 3, 1500);

    Bank::printBankInfo();

    cout << "Dick withdraw 1200" << endl;
    Dick.withdraw(1200);

    Bank::printBankInfo();

    cout << "Sarah deposited 700" << endl;
    Dick.deposit(700);

    Bank::printBankInfo();

    cout << "Adam's account was terminated due to lack of use" << endl;
    Adam.~Bank();

    Bank::printBankInfo();

    return 0;
}