// 2개의 생성자를 가진 Circle 클래스
#include <iostream>

using namespace std;

class Circle {
public:
    int radius;

    Circle();       // 디폴트 생성자
    Circle(int r);  // 매개 변수 있는 생성자

    double getArea();
};

Circle::Circle() {
    radius = 1; // 반지름 값 초기화
    cout << "반지름 " << radius << " 원 생성" << endl;
}

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

    Circle pizza(30);   // 매개 변수 있는 생성자 호출 (30이 r에 전달됨)
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;

    return 0;
}
