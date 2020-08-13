// Section 15
// Copy constructor and operator=

#include <iostream>

using namespace std;

class Base {

private:
	int value;
public:
	Base(): value {0} { cout << "Base no-args constructor" << endl; }
	Base(int x): value {x} { cout << "Base (int) overloaded constructor" << endl; }
	Base(const Base &other): value {other.value} {
		cout << "Base copy constructor" << endl;
	}

	Base &operator=(const Base &rhs) {
		cout << "Base operator=" << endl;
		if (this == &rhs)
			return *this;
		value = rhs.value;
		return *this;
	}
	~Base() { cout << "Base destructor" << endl; }
};

class Derived: public Base {

private:
	int doubled_value;
public:
	Derived(): Base {}, doubled_value {0} { cout << "Derived no-args constructor" << endl; }
	Derived(int x): Base {x}, doubled_value {x * 2} { cout << "Derived (int) overloaded constructor" << endl; }
	Derived(const Derived &other)
		: Base(other), doubled_value {other.doubled_value} {
		cout << "Derived copy constructor" << endl;
	}

	Derived &operator=(const Derived &rhs) {
		cout << "Derived operator=" << endl;
		if (this == &rhs)
			return *this;
		Base::operator=(rhs);
		doubled_value = rhs.doubled_value;
		return *this;
	}
	~Derived() { cout << "Derived destructor" << endl; }
};

int main() {

	// Base b {100};		// Overloaded constructor
	// Base b1 {b};		// Copy constructor
	// b = b1;				// Copy constructor

	Derived d {100};	// Overloaded constructor
	Derived d1 {d};		// Copy constructor
	d = d1;				// Copy constructor

	return 0;
}