// Section 16
// Interface - complete

#include <iostream>

using namespace std;

class I_Printable {
	friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
public:
	virtual void print(std::ostream &os) const = 0;
	virtual ~I_Printable() {}
};

std::ostream &operator<<(std::ostream &os, const I_Printable &obj) {
	obj.print(os);
	return os;
}

class Account: public I_Printable {
public:
	virtual void withdraw(double amount) {
		cout << "In Account::withdraw" << endl;
	}
	virtual void print(std::ostream &os) const override {
		os << "Account display";
	}
	virtual ~Account() {}
};

class Savings: public Account {
public:
	virtual void withdraw(double amount) {
		cout << "In Savings::withdraw" << endl;
	}
	virtual void print(std::ostream &os) const override {
		os << "Savings display";
	}
	virtual ~Savings() {}
};

class Checking: public Account {
public:
	virtual void withdraw(double amount) {
		cout << "In Checking::withdraw" << endl;
	}
	virtual void print(std::ostream &os) const override {
		os << "Checking display";
	}
	virtual ~Checking() {}
};

class Trust: public Account {
public:
	virtual void withdraw(double amount) {
		cout << "In Trust::withdraw" << endl;
	}
	virtual void print(std::ostream &os) const override {
		os << "Trust display";
	}
	virtual ~Trust() {}
};

class Dog: public I_Printable {
public:
	virtual void print(std::ostream &os) const override {
		os << "Woof Woof";
	}
};

void print(const I_Printable &obj) {
	cout << obj << endl;
}

int main() {

	// Account a;
	// cout << a << endl;

	// Savings s;
	// cout << s << endl;

	// Checking c;
	// cout << c << endl;

	// Trust t;
	// cout << t << endl;

	Account *p1 = new Account();
	cout << *p1 << endl;

	Account *p2 = new Savings();
	cout << *p2 << endl;

	Account *p3 = new Checking();
	cout << *p3 << endl;

	Account *p4 = new Trust();
	cout << *p4 << endl;
	
	Dog *dog = new Dog();
	cout << *dog << endl;

	print(*dog);

	delete p1;
	delete p2;
	delete p3;
	delete p4;
	delete dog;

	cout << endl;	
	return 0;
}