// Section 16
// Using Base class pointers

#include <iostream>
#include <vector>

using namespace std;

// This class uses dynamic polymorphism for the withdraw method
// We'll learn about virtual functions in the next video
class Account {
public:
    virtual void withdraw(double amount) {
        cout << "In Account::withdraw" << endl;
    }
    virtual ~Account() {}
};

class Savings : public Account {
public:
    virtual void withdraw(double amount) {
        cout << "In Savings::withdraw" << endl;
    }
    virtual ~Savings() {}
};

class Checking : public Account {
public:
    virtual void withdraw(double amount) {
        cout << "In Checking::withdraw" << endl;
    }
    virtual ~Checking() {}
};

class Trust : public Account {
public:
    virtual void withdraw(double amount) {
        cout << "In Trust::withdraw" << endl;
    }
    virtual ~Trust() {}
};

int main() {

    cout << "\n=== Pointers =======================" << endl;
    Account* p1 = new Account();
    Account* p2 = new Savings();
    Account* p3 = new Checking();
    Account* p4 = new Trust();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    cout << "\n=== Array ==========================" << endl;
    Account *array [] = {p1, p2, p3, p4};
    for (auto i = 0; i < 4; i++)
        array[i]->withdraw(1000);

    cout << "\n=== Array ==========================" << endl;
    array[0] = p4;
    for (auto i = 0; i < 4; i++)
        array[i]->withdraw(1000);

    cout << "\n=== Vector =========================" << endl;
    vector<Account*> accounts {p1, p2, p3, p4};
    for (auto acc_ptr : accounts)
        acc_ptr->withdraw(1000);

    cout << "\n=== Vector =========================" << endl;
    accounts.push_back(p4);
    accounts.push_back(p4);
    for (auto acc_ptr : accounts)
        acc_ptr->withdraw(1000);

    cout << "\n=== Clean up =======================" << endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    cout << endl;
    return 0;
}
