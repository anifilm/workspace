/* 이론 문제
Q8
각 문항에 따라 함수 g()의 빈칸에 적절한 코드는?
*/
#include <iostream>

using namespace std;

void f() {
    cout << "f() called" << endl;
}

class A {
public:
    virtual void f() { cout << "A::f() called" << endl; }
};

class B : public A {
public:
//  void g() { __________ }
    void f() { cout << "B::f() called" << endl; }
};

/*
(1) 함수 g()가 외부 함수 f()를 호출한다.
    void g() { ::f(); }

(2) 함수 g()가 클래스 A의 멤버 함수 f()를 호출한다.
    void g() { A::f(); }

(3) 함수 g()가 자신의 멤버 함수 f()를 호출한다.
    void g() { f(); }

*/
