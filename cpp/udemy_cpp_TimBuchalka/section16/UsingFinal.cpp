// Section 16
// Using final

#include <iostream>

using namespace std;

class Base {
public:
	virtual void say_hello() const {
		cout << "Hello - I'm Base class object" << endl;
	}
};

class Derived: public Base {
public:
	virtual void say_hello() const override final {
		cout << "Hello - I'm Derived class object" << endl;
	}
};

class Another: public Derived {
public:
	virtual void say_hello() const override {		// Error cannot override final method
		cout << "Hello - I'm Another class object" << endl;
	}
};

void greetings(const Base &obj) {
	cout << "Greetings: ";
	obj.say_hello();
}

int main() {

	Base b;
	b.say_hello();					// Base::say_hello()

	Derived d;
	d.say_hello();					// Derived::say_hello()

	Base *p1 = new Base();			// Base::say_hello()
	p1->say_hello();

	Derived *p2 = new Derived();	// Derived::say_hello()
	p2->say_hello();

	Base *p3 = new Derived();		// Base::say_hello()	????	IMPORTANT !!!
	p3->say_hello();

	cout << "\n===========================================" << endl;
	greetings(b);
	greetings(d);
	greetings(*p1);
	greetings(*p2);
	greetings(*p3);

	cout << endl;
	return 0;
}