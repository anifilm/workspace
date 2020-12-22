// '주소에 의한 호출'로 객체 전달
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

void increase(Circle* c) {  // waffle 객체의 주소가 p에 전달됨
    int r = c->getRadius();
    c->setRadius(r + 1);    // waffle 객체의 반지름 1 증가
} // 함수 종료시 포인터 p 소멸

int main() {

    Circle waffle(30);
    increase(&waffle);  // waffle 객체의 주소를 전달
    cout << waffle.getRadius() << endl;

    return 0;
}

/*

'주소에 의한 호출'의 특징

객체의 주소를 전달하는 방식은 원본 객체를 통째로 전달하는 '값에 의한 호출'에 비해 원본
객체를 복사하는 시간 소모가 없으면, 매개 변수가 단순 포인터이므로, '값에 의한 호출'
시에 발생하는 생성자 소멸자의 비대칭 문제도 없다. 하지만, 매개 변수 포인터로 의도하지
않게 원본 객체를 훼손할 가능성이 있기 때문에 코딩에 조심해야 한다.

*/
