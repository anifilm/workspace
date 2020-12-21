// Circle 객체의 동적 생성 및 반환
#include <iostream>

using namespace std;

class Circle {
private:
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    void setRadius(int r) { radius = r; }
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

int main() {

    Circle *p, *q;
    p = new Circle;     // 디폴트 생성자 Circle() 호출, p = new Circle();와 같다
    q = new Circle(30); // 생성자 Circle(30) 호출

    cout << p->getArea() << endl << q->getArea() << endl;

    // 생성한 순서에 관계없이 원하는 순서대로 delete 할 수 있다.
    delete p;   // Circle 객체 반환
    delete q;   // Circle 객체 반환

    return 0;
}
