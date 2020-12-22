// '값에 의한 호출'시 매개 변수의 생성자 실행되지 않음
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
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
    this->radius = r;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
    cout << "소멸자 실행 radius = " << radius << endl;
}

void increase(Circle c) {   // 객체 c의 생성자 실행되지 않음
    int r = c.getRadius();
    c.setRadius(r + 1);
}   // 객체 c의 소멸자 실행됨

int main() {

    Circle waffle(30);
    increase(waffle);   // waffle의 내용이 그대로 c에 복사
    cout << waffle.getRadius() << endl;

    return 0;
}

/*

복사 생성자

'값에 의한 호출'시, 컴파일러는 매개 변수 객체의 생성자(constructor) 대신 복사 생성자
(copy constructor)가 호출되도록 컴파일하기 때문에, 생성자가 실행되지 않는 것이다.
컴파일러는 클래스에 복사 생성자가 작성되어 있지 않는 경우, 실인자 객체의 멤버 변수를
1:1로 매개 변수 객체에 복사하는 디폴트 복사 생성자를 자동으로 삽입한다.

*/
