/* 이론 문제
Q14
다음 코드에 대해 물음에 답하여라.
*/
#include <iostream>

using namespace std;

class Shape {
public:
    void paint() { draw(); }
    virtual void draw() = 0;
};

class Circle : public Shape {
private:
    int radius;
public:
    Circle(int radius = 1) { this->radius = radius; }
    double getArea() { return radius * radius * 3.14; }
    virtual void draw() { cout << "반지름 = " << radius << "인 원" << endl; }  // (2) 순수 virtual 함수 구현
};

int main() {
/* (1) 다음 중 오류가 발생하는 것을 있는 대로 고르시오.
    Shape shape;  // 오류, 추상 클래스의 인스턴스(객체)를 생성할 수 없다.
    Shape* p;     // 추상 클래스의 포인터 선언 가능
    Circle circle(10);  // 오류, 추상 클래스의 구현부에 draw()가 구현되지 않아 생성자 사용 불가
    Circle* pCircle;
*/

/* (2) 다음 코드의 실행 결과 "반지름 = 10인 원"이 출력 되도록 Shape이나 Circle 클래스를 수정하라. */
    Circle* p = new Circle(10);
    p->paint();

    delete p;

    return 0;
}
