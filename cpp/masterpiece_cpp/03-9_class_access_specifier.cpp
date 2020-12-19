// 다음 소스에서 컴파일 오류가 발생하는 곳은 어디인가?
#include <iostream>

using namespace std;

class PrivateAccessError {
private:
    int a;
    void f();
    PrivateAccessError();
public:
    int b;
    PrivateAccessError(int x);
    void g();
};

PrivateAccessError::PrivateAccessError() {
    a = 1;
    b = 1;
}

PrivateAccessError::PrivateAccessError(int x) {
    a = x;
    b = x;
}

void PrivateAccessError::f() {
    a = 5;
    b = 5;
}

void PrivateAccessError::g() {
    a = 6;
    b = 6;
}

int main() {

//  PrivateAccessError objA;    // 생성자가 private이므로 호출할 수 없다.
    PrivateAccessError objB(100);
//  objB.a = 10;    // 클래스의 private 멤버 변수이므로 접근할 수 없다.
    objB.b = 20;
//  objB.f();       // 클래스의 private 멤버 함수이므로 호출할 수 없다.
    objB.g();

    return 0;
}
