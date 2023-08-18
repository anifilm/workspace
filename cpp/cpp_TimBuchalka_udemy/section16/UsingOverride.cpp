// Section 16
// Using override

#include <iostream>

using namespace std;

class Base {
public:
    virtual void say_hello() const {
        cout << "Hello - I'm a Base class object" << endl;
    }
    virtual ~Base() {}
};

class Derived : public Base {
public:
    virtual void say_hello() const override {				// Notice I forgot the const
        cout << "Hello - I'm a Derived class object" << endl;
    }
    virtual ~Derived() {}
};

int main() {

    Base* p1 = new Base();			// Base::say_hello()
    p1->say_hello();

    Derived* p2 = new Derived();	// Derived::say_hello()
    p2->say_hello();

    Base* p3 = new Derived();		// Base::say_hello()	????	I wanted Drived::say_hello()
    p3->say_hello();

    cout << endl;
    return 0;
}
