// 지역 객체와 전역 객체의 생성 및 소멸 순서
#include <iostream>

using namespace std;

class Circle {
private:
    int radius;
public:
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
    // cout << "Circle(int r)을 통한 객체 생성" << endl;
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

// 전역 객체 생성
Circle globalDonut(1000);
Circle globalPizza(2000);

// 지역 객체 생성
void f() {
    Circle fDonut(100);
    Circle fPizza(200);
}

int main() {

    // 지역 객체 생성
    Circle mainDonut(10);
    Circle mainPizza(20);
    f();

    return 0;
}
