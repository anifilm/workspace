/* 이론 문제
Q6
다음 코드에서 컴파일 오류가 발생하는 곳을 있는 대로 골라라.
*/
#include <iostream>

class A {
private:
    int s, x;
public:
    void setX(int x) { this->x = x; }
};

class B : protected A {
private:
    int y;
public:
    void setXY(int x, int y) {
        setX(x);
        this->y = y;
    }
};

int main() {

    A a;
    B b;
    a.x = 3;    // A 클래스의 private 멤버 변수로 접근 불가
    b.y = 3;    // B 클래스의 private 멤버 변수로 접근 불가
    a.setX(5);
    b.setX(5);  // B 클래스에서 protected 로 상속 받은 멤버 함수로 접근 불가
}
