// 참조에 의한 호출로 Circle 객체의 참조 전달
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
    radius = r;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
    cout << "소멸자 실행 radius = " << radius << endl;
}

void increase(Circle& c) {  // c는 참조 매개 변수
    int r = c.getRadius();
    c.setRadius(r + 1); // c가 참조하는 원본 객체의 반지름 1 증가
}

int main() {

    Circle waffle(30);
    increase(waffle);   // 참조에 의한 호출
    cout << waffle.getRadius() << endl;

    return 0;
}

/*

참조에 의한 호출로 객체 전달

'값에 의한 호출'로 객체를 매개 변수에 전달하면 다음 두 가지 사항에 유의해야 한다.
  - 함수 내에서 매개 변수 객체를 변경하여도, 원본 객체를 변경 시키지 않는다.
  - 매개 변수 객체의 생성자가 실행되지 않고 소멸자만 실행되는 비대칭 구조로 동작한다.

그러나 '참조에 의한 호출'은 이 두 가지 사항에 완전히 다른게 동작한다.
  - 참조 매개 변수로 이루어진 모든 연산은 원본 객체에 대한 연산이 된다.
  - 참조 매개 변수는 이름만 생성되므로, 생성자와 소멸자는 아예 실행되지 않는다.

*/
