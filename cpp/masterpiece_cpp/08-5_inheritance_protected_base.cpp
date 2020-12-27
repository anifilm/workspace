// protected 상속 사례
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

class Derived : protected Base {  // protected 상속
private:
    int b;
protected:
    void setB(int b) { this->b = b; }
public:
    void showB() { cout << b; }
};

int main() {

    Derived x;

//  x.a = 5;     // 상속될 때 protected 속성으로 재설정되어 접근 불가
//  x.setA(10);  // 상속될 때 protected 속성으로 재설정되어 접근 불가
//  x.showA();   // 상속될 때 protected 속성으로 재설정되어 접근 불가

//  x.b = 10;    // private 속성으로 접근 불가
//  x.setB(10);  // protected 속성으로 접근 불가
    x.showB();

    return 0;
}
