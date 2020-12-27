/* 이론 문제
Q4
다음 코드에 대해 컴파일 오류가 발생하는 것은?
*/
#include <iostream>

class A {
public:
    int w;
};

class B : public A {
public:
    int x;
};

class C : private A {
public:
    int y;
};

class D : protected B {
public:
    int z;
};

int main() {
// (1)
    A a;
    a.w = 10;  // 사용 가능

// (2)
    B b;
    b.w = 10;  // 사용 가능

// (3)
    C c;
    c.y = 10;  // 사용 가능
    c.w = 20;  // A 클래스를 private로 상속 받았기 때문에 main() 함수 및 C 클래스 내에서도 A 클래스의 멤버 변수에 접근 불가

// (4) B만 상속 받은 상태에서 A 클래스의 멤버 변수에 접근 불가
    D d;
    d.w = 10;  // A 클래스에는 접근 불가
    d.x = 20;  // B 클래스를 protected로 상속 받았기 때문에 main() 함수에서 B 클래스의 멤버 변수에 접근 불가

    return 0;
}
