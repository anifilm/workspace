// Section 16
// Interface - start

#include <iostream>

using namespace std;

class Account {
    friend std::ostream& operator<<(std::ostream& os, const Account& acc);
public:
    virtual void withdraw(double amount) {
        cout << "In Account::withdraw" << endl;
    }
    virtual ~Account() {}
};

std::ostream& operator<<(std::ostream& os, const Account& acc) {
    os << "Account display";
    return os;
}

class Savings : public Account {
    friend std::ostream& operator<<(std::ostream& os, const Savings& acc);
public:
    virtual void withdraw(double amount) {
        cout << "In Savings::withdraw" << endl;
    }
    virtual ~Savings() {}
};

std::ostream& operator<<(std::ostream& os, const Savings& acc) {
    os << "Savings display";
    return os;
}

class Checking : public Account {
    friend std::ostream& operator<<(std::ostream& os, const Checking& acc);
public:
    virtual void withdraw(double amount) {
        cout << "In Checking::withdraw" << endl;
    }
    virtual ~Checking() {}
};

std::ostream& operator<<(std::ostream& os, const Checking& acc) {
    os << "Checking display";
    return os;
}

class Trust : public Account {
    friend std::ostream& operator<<(std::ostream& os, const Trust& acc);
public:
    virtual void withdraw(double amount) {
        cout << "In Trust::withdraw" << endl;
    }
    virtual ~Trust() {}
};

std::ostream& operator<<(std::ostream& os, const Trust& acc) {
    os << "Trust display";
    return os;
}

int main() {

//  Account a;
//  cout << a << endl;

//  Savings s;
//  cout << s << endl;

//  Checking c;
//  cout << c << endl;

//  Trust t;
//  cout << t << endl;

    Account* p1 = new Account();
    cout << *p1 << endl;

    Account* p2 = new Savings();
    cout << *p2 << endl;

    Account* p3 = new Checking();
    cout << *p3 << endl;

    Account* p4 = new Trust();
    cout << *p4 << endl;

    delete p1;
    delete p2;
    delete p3;
    delete p4;

    cout << endl;
    return 0;
}
