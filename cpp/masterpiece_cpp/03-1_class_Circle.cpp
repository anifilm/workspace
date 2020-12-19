// Circle 클래스의 객체 생성 및 활용
#include <iostream>

using namespace std;

// Circle 클래스 선언부
class Circle {
public:
    // 멤버 변수
    int radius = 5; // C++11 부터 클래스 선언부에서 멤버 변수를 초기화할 수 있다.

    // 멤버 함수
    double getArea();
};

// Circle 클래스 구현부
double Circle::getArea() {
    return radius * radius * 3.14;
}

int main() {

    Circle donut;
    donut.radius = 1;    // donut 객체의 반지름을 10으로 설정
    double area = donut.getArea();  // donut 객체의 면적 알아내기
    cout << "donut 면적은 " << area << endl;

    Circle pizza;
    pizza.radius = 30;  // pizza 객체의 반지름을 30으로 설정
    area = pizza.getArea(); // pizza 객체의 면적 알아내기
    cout << "pizza 면적은 " << area << endl;

    return 0;
}
