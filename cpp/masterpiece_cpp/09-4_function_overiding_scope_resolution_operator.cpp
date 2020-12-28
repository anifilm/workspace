// 범위 지정 연산자를 이용한 기본 크래스의 가상 함수 호출
#include <iostream>

using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Shape::draw() called" << endl;
    }
};

class Circle : public Shape {
public:
    virtual void draw() {
        Shape::draw();  // 기본 클래스의 draw() 호출 (정적 바인딩)
        cout << "Circle::draw() called" << endl;
    }
};

int main() {

    Circle circle;
    Shape* pShape = &circle;

    pShape->draw();  // draw()가 virtual이므로 동적 바인딩 발생
    pShape->Shape::draw();  // 범위 지정 연산자로 인해 정적 바인딩 발생

    return 0;
}
