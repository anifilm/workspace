/* 이론 문제
Q6
다음 코드에 대해 물음에 답하여라.
  (1) 다음 함수 중 가상 함수를 모두 고르시오.
      A의 f()  - 가상 함수
      B의 f()  - 가상 함수
      C의 f()  - 가상 함수
      A의 func()
*/
#include <iostream>

using namespace std;

class A {
public:
    void func() { f(); }
    virtual void f() { cout << "A::f() called" << endl; }
};

class B : public A {
public:
    void f() { cout << "B::f() called" << endl; }
};

class C : public B {
public:
    void f() { cout << "C::f() called" << endl; }
};

// (2) 다음 코드가 실행될 때 출력되는 결과는 무엇인가?
int main() {

    C c;
    c.f();       // "C::f() called"
    A* pa;
    B* pb;
    pa = pb = &c;
    pb->f();     // "C::f() called"
    pa->f();     // "C::f() called"
    pa->func();  // "C::f() called"

    return 0;
}
