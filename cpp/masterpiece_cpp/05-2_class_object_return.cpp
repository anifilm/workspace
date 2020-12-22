// 객체 리턴
#include <iostream>

using namespace std;

class Circle {
private:
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int r) { this->radius = r; }
    void setRadius(int r) { this->radius = r; }
    double getArea() { return radius * radius * 3.14; }
};

Circle getCircle() {
    Circle tmp(30);
    return tmp; // 객체 tmp를 반환한다. (tmp 객체의 복사본 리턴)
}

int main() {

    Circle circle;  // 객체가 생성된다. radius = 1로 초기화 된다.
    cout << circle.getArea() << endl;

    circle = getCircle();   // tmp 객체가 circle에 복사, circle의 radius는 30이 된다.
    cout << circle.getArea() << endl;

    return 0;
}
