/*
Q1
두 개의 Circle 객체를 교환하는 swap() 함수를 '참조에 의한 호출'이 되도록 작성하고
호출하는 프로그램을 작성하라.

*/
#include <iostream>

using namespace std;

class Circle {
private:
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    int getRadius() { return radius; }
    void setRadius(int r) { this->radius = r; }
    double getArea() { return radius * radius * 3.14; }
};

Circle::Circle() {
    radius = 1;
    // cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
    this->radius = r;
    // cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
    // cout << "소멸자 실행 radius = " << radius << endl;
}

void swap(Circle& a, Circle& b) {
    Circle tmp = a;
    a = b;
    b = tmp;
}

int main() {

    Circle a(10), b(20);
    cout << a.getRadius() << ' ' << b.getRadius() << endl;
    swap(a, b);
    cout << a.getRadius() << ' ' << b.getRadius() << endl;

    return 0;
}
