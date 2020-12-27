// 상속이 중첩될 때 접근 지정 사례
#include <iostream>

using namespace std;

class Base {
private:
    int a;
protected:
    void setA(int a) { this->a = a; }
public:
    void showA() { cout << a; }
};

class Derived : private Base {  // private 상속
private:
    int b;
protected:
    void setB(int b) { this->b = b; }
public:
    void showB() {
        setA(5);    // protected 속성으로 사용 가능
        showA();    // public 속성으로 사용 가능
        cout << b;
    }
};

class GrandDerived : private Derived {  // private 상속
private:
    int c;
protected:
    void setAB(int x) {
    //  setA(x);  // Derived 상속시 private로 속성이 변경되어 접근 불가
    //  showA();  // Derived 상속시 private로 속성이 변경되어 접근 불가
        setB(x);  // Derived의 protected 멤버이므로 사용 가능
    }
};
