/* 이론 문제
Q5
다음 코드에 대해 물음에 답하여라.
  (1) 기본 클래스와 파생 클래스는 무엇인가?

*/
#include <iostream>

using namespace std;

class Base {  // 기본 클래스
public:
    void func() { f(); }
    void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {  // 파생 클래스
public:
    void f() { cout << "Derived::f() called" << endl; }
};

// (2) 다음 코드가 실행될 때 화면에 출력되는 내용은?
int main() {

    Derived der;
    der.f();   // "Derived::f() called"

    Base base;
    Base* p = &base;
    p->f();    // "Base::f() called"
    p = &der;  // 업 캐스팅, 객체 der을 가리킨다.
    p->f();    // "Base::f() called"
    p->func(); // "Base::f() called"

    Derived* q = (Derived*)p;  // 다운 캐스팅
    q->f();    // "Derived::f() called"

    return 0;
}
