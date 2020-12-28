// 상속이 반복되는 경우 가상 함수 호출 (오버라이딩 시 virtual 지시어 생략 가능)
#include <iostream>

using namespace std;

class Base {
public:
    virtual void f() { cout << "Base::f() called" << endl; }  // 가상 함수
};

class Derived : public Base {
public:
    void f() { cout << "Derived::f() called" << endl; }  // 오버라이딩 (virtual 지시어 생략)
};

class GrandDerived : public Derived {
public:
    void f() { cout << "GrandDerived::f() called" << endl; }  // 오버라이딩 (virtual 지시어 생략)
};

int main() {

    GrandDerived g;
    Base* bp;
    Derived* dp;
    GrandDerived* gp;

    bp = dp = gp = &g;  // 모든 포인터가 객체 g를 가리킨다.

    bp->f();  // Base의 멤버 f() 호출
    dp->f();  // Drived의 멤버 f() 호출
    gp->f();  // GrandDerived의 멤버 f() 호출

/* 실행결과: 동적 바잍딩에 의해 모두 GrandDerived의 함수 f() 호출 */

    return 0;
}
