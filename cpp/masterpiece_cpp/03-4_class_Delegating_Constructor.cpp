// 생성자에서 다른 생성자 호출, 위임 생성자 (Delegating Constructor)
#include <iostream>

using namespace std;

class Circle {
private:
    int radius;
public:
    Circle();       // 위임 생성자
    Circle(int r);  // 타겟 생성자
    double getArea();
};

// 위임 생성자
Circle::Circle() : Circle(1) {}

// 객체 초기화를 전담하는 타겟 생성자
Circle::Circle(int r) {
    radius = r; // 반지름 값 초기화
    cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea() {
    return radius * radius * 3.14;
}

int main() {

    Circle donut;   // 매개 변수 없는 생성자 호출
    double area = donut.getArea();
    cout << "donut 면적은 " << area << endl;

    Circle pizza(30);   // 매개 변수 있는 생성자 호출
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;

    return 0;
}
