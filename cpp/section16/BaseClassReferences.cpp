// Section 16
// Using Base class references

#include <iostream>

using namespace std;

// This class uses dynamic polymorphism for the withdraw method
class Account {
public:
	virtual void withdraw(double amount) {
		cout << "In Account::withdraw" << endl;
	}
	virtual ~Account() {}
};

class Savings: public Account {
public:
	virtual void withdraw(double amount) {
		cout << "In Savings::withdraw" << endl;
	}
	virtual ~Savings() {}
};

class Checking: public Account {
public:
	virtual void withdraw(double amount) {
		cout << "In Checking::withdraw" << endl;
	}
	virtual ~Checking() {}
};

class Trust: public Account {
public:
	virtual void withdraw(double amount) {
		cout << "In Trust::withdraw" << endl;
	}
	virtual ~Trust() {}
};

void do_withdraw(Account &account, double amount) {
	account.withdraw(amount);
}

int main() {

	Account a;
	Account &ref = a;
	ref.withdraw(1000);				// In Account::withdraw

	Trust t;
	Account &ref1 = t;
	ref1.withdraw(1000);			// In Trust::withdraw

	Account a1;
	Savings a2;
	Checking a3;
	Trust a4;

	do_withdraw(a1, 1000);			// In Account::withdraw
	do_withdraw(a2, 1000);			// In Savings::withdraw
	do_withdraw(a3, 1000);			// In Checking::withdraw
	do_withdraw(a4, 1000);			// In Trust::withdraw
	
	cout << endl;	
	return 0;
}