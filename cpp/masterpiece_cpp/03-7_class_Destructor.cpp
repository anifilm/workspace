// Circle 클래스에 소멸자 작성 및 실행
#include <iostream>

using namespace std;

class Circle {
public:
    int radius;

    Circle();
    Circle(int r);
    ~Circle();  // 소멸자 선언

    double getArea();
};

// Circle::Circle() {
//     radius = 1;
//     cout << "반지름 " << radius << " 원 생성" << endl;
// }
Circle::Circle() : Circle(1) {
    cout << "Circle(int r)을 통한 객체 생성" << endl;
}

Circle::Circle(int r) {
    radius = r;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::~Circle() { // 소멸자 구현
    cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle::getArea() {
    return radius * radius * 3.14;
}

int main() {

    Circle donut;
    double area = donut.getArea();
    cout << "donut 면적은 " << area << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;

    return 0;
}
