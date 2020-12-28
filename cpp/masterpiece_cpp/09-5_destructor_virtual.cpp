// 소멸자를 가상 함수로 선언
#include <iostream>

using namespace std;

class Base {
public:
    virtual ~Base() { cout << "Base::~Base() called" << endl; }  // 소멸자 virtual 선언
};

class Derived : public Base {
public:
    virtual ~Derived() { cout << "Derived::~Derived() called" << endl; }  // 소멸자 virtual 선언
};

int main() {

    Derived* dp = new Derived();
    Base* bp = new Derived();

    delete dp;  // Derived의 포인터로 소멸
    delete bp;  // Base의 포인터로 소멸

    return 0;
}
