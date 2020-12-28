// 오버라이딩한 함수를 호출하는 동적 바인딩, paint() 함수에서 동적 바인딩에 의해 Circle의 draw() 호출
#include <iostream>

using namespace std;

class Shape {
public:
    void paint() {
        draw();  // 기본 클래스에서 파생 클래스의 함수를 호출하는 사례
    }
    virtual void draw() {
        cout << "Shape::draw() called" << endl;
    }
};

class Circle : public Shape {
public:
    virtual void draw() {
        cout << "Circle::draw() called" << endl;
    }
};

int main() {

    Shape* pShape = new Circle();  // 업 캐스팅
    pShape->paint();  // paint()는 Circle에서 오버라이딩한 draw() 함수를 호출한다.

    delete pShape;

    return 0;
}
