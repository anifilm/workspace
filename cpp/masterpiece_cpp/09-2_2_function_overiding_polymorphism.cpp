// 오버라이딩을 이용한 다형성 구현
#include <iostream>

using namespace std;

class Shape {
public:
    virtual void draw() {}  // 가상 함수 선언. 파생 클래스에서 재정의 할 함수에 대한 인터페이스 역할
};

class Circle : public Shape {
protected:
    virtual void draw() {
        cout << "Circle을 그린다." << endl;
    }
};

class Rect : public Shape {
protected:
    virtual void draw() {
        cout << "Rect를 그린다." << endl;
    }
};

class Line : public Shape {
protected:
    virtual void draw() {
        cout << "Line을 그린다." << endl;
    }
};

void paint(Shape* p) {
    p->draw();  // Shape의 draw()가 호출되지 않고, p가 가리키는 객체 내에 오버라이딩된 draw() 호출
}

int main() {

    paint(new Circle());  // Circle을 그린다.
    paint(new Rect());    // Rect를 그린다.
    paint(new Line());    // Line을 그린다.

    return 0;
}

/*

오버라이딩의 목적

기본 클래스에 가상 함수를 만드는 목적은 파생 클래스들이 자신의 목적에 맞게 가상 함수를
재정의 하도록 하는 것이다. 기본 클래스의 가상 함수는 상속받는 파생 클래스에서 구현해야
할 일종의 함수 인터페이스를 제공한다. 다시 말하면, 가상 함수는 '하나의 인터페이스에 대해
서로 다른 모양의 구현'이라는 객체 지향 언어의 다형성(polymorphism)을 실현하는 도구이다.

*/
