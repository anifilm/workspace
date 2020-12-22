// Circle 클래스의 복사 생성자와 객체 복사
#include <iostream>

using namespace std;

class Circle {
private:
    int radius;
public:
    Circle(const Circle& c);    // 복사 생성자 선언
    Circle() { radius = 1; }
    Circle(int r) { this->radius = r; }
    void setRadius(int r) { this->radius = r; }
    double getArea() { return radius * radius * 3.14; }
};

Circle::Circle(const Circle& c) {   // 복사 생성자 구현
    this->radius = c.radius;
    cout << "복사 생성자 실행 radius = " << radius << endl;
}

int main() {

    Circle src(30);     // src 객체의 생성자 호출
    Circle dest(src);   // dest 객체의 복사 생성자 호출

    cout << "원본의 면적 = " << src.getArea() << endl;
    cout << "사본의 면적 = " << dest.getArea() << endl;

    return 0;
}
