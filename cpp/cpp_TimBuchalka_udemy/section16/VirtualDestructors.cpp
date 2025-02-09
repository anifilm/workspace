// Section 16
// Virtual destructors

#include <iostream>

using namespace std;

// This class uses dynamic polymorphism for the withdraw method
class Account {
public:
    virtual void withdraw(double amount) {
        cout << "In Account::withdraw" << endl;
    }
    virtual ~Account() { cout << "In Account::destructor" << endl; }
};

class Savings : public Account {
public:
    virtual void withdraw(double amount) {
        cout << "In Savings::withdraw" << endl;
    }
    virtual ~Savings() { cout << "In Savings::destructor" << endl; }
};

class Checking : public Account {
public:
    virtual void withdraw(double amount) {
        cout << "In Checking::withdraw" << endl;
    }
    virtual ~Checking() { cout << "In Checking::destructor" << endl; }
};

class Trust : public Account {
public:
    virtual void withdraw(double amount) {
        cout << "In Trust::withdraw" << endl;
    }
    virtual ~Trust() { cout << "In Trust::destructor" << endl; }
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

    cout << "\n=== Clean up =======================" << endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    cout << endl;
    return 0;
}
