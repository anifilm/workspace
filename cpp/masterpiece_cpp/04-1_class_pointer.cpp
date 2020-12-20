// 객체 포인터 선언 및 활용
#include <iostream>

using namespace std;

class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int r) { radius = r; }
    double getArea();
};

double Circle::getArea() {
    return radius * radius * 3.14;
}

int main() {

    Circle donut;
    Circle pizza(30);

    // 객체 이름으로 멤버 접근
    cout << donut.getArea() << endl;    // 3.14 출력

    // 객체 포인터로 멤버 접근
    Circle* p;  // 객체에 대한 포인터 선언
    p = &donut; // 포인터에 객체 주소 저장

    cout << p->getArea() << endl;   // donut의 getArea() 호출, 3.14 출력
    cout << (*p).getArea() << endl; // donut의 getArea() 호출, 3.14 출력

    p = &pizza;

    cout << p->getArea() << endl;   // pizza의 getArea() 호출, 2826 출력
    cout << (*p).getArea() << endl; // pizza의 getArea() 호출, 2826 출력

    return 0;
}
