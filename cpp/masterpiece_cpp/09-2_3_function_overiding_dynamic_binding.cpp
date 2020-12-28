// 오버라이딩한 함수를 호출하는 동적 바인딩, paint() 함수에서 Shape의 draw() 호출
#include <iostream>

using namespace std;

class Shape {
public:
    void paint() {
        draw();
    }
    virtual void draw() {
        cout << "Shape::draw() called" << endl;
    }
};

int main() {

    Shape* pShape = new Shape();
    pShape->paint();  // paint()는 Shape의 draw() 함수를 호출한다.

    delete pShape;

    return 0;
}
