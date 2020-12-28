// 파생 클래스에서 함수를 재정의하는 사례
#include <iostream>

using namespace std;

class Base {
public:
    void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public:
    void f() { cout << "Derived::f() called" << endl; }  // Base의 멤버 함수 f()를 재정의
};

int main() {

    Derived d, *pDer;
    pDer = &d;  // 객체 d를 가리킨다.
    pDer->f();  // Derived의 멤버 f() 호출

    Base* pBase;
    pBase = pDer;  // 업캐스팅. 객체 d를 가리킨다.
    pBase->f();    // Base의 멤버 f() 호출

    return 0;
}

/*

위의 예제에서 Base의 멤버 함수 f()와 완전히 동일한 원형으로 멤버 함수 f()를 Derived에
재정의 하였다. 상속에 있어 기본 클래스의 멤버 함수로 원하는 작업을 할 수 없는 경우,
파생 클래스에서 동일한 원형으로 그 함수를 재정의하여 해결할 수 있다.
정리하면, 파생 클래스에 기본 클래스와 동일한 형식의 함수를 재정의하는 경우, 기본 클래스
에 대한 포인터로 기본 클래스의 함수를 호출하고, 파생 클래스의 포인터로는 파생 클래스에
작성된 함수를 호출하낟. 이러한 호출 관계는 컴파일시에 결정 된다. (정적 바인딩)

범위 지정 연산자(::)를 사용하면 기본 클래스의 멤버 함수와 파생 클래스에 재정의된 함수를
구분하여 호출할 수 있다. 위의 예제에서는 다음과 같이 pDer를 이용할 수 있다.
  pDer->f();        // Derived의 멤버 f() 호출
  pDer->Base::f();  // Bae의 멤버 f() 호출

*/
