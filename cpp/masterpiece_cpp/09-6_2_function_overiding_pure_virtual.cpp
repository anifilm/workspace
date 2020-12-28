// Shape을 추상 클래스로 선언한 경우
#include <iostream>

using namespace std;

class Shape {  // Shape은 추상 클래스
private:
    Shape* next;
protected:
    virtual void draw() = 0;  // 순수 virtual 함수
public:
    Shape() { next = NULL; }
    virtual ~Shape() {}
    void paint();
    Shape* add(Shape *p);
    Shape* getNext() { return next; }
};

void Shape::paint() {
    draw();
}
/*
void Shape::draw() {
    cout << "-- Shape --" << endl;
} */

Shape* Shape::add(Shape* p) {
    this->next = p;
    return p;
}

class Circle : public Shape {
protected:
    virtual void draw();
};

void Circle::draw() {
    cout << "Circle" << endl;
}

class Rect : public Shape {
protected:
    virtual void draw();
};

void Rect::draw() {
    cout << "Rectangle" << endl;
}

class Line : public Shape {
protected:
    virtual void draw();
};

void Line::draw() {
    cout << "Line" << endl;
}

int main() {

    Shape* pStart = NULL;
    Shape* pLast;

    pStart = new Circle();  // 처음에 원 도형을 생성한다.
    pLast = pStart;

    pLast = pLast->add(new Rect());  // 사각형 객체 생성
    pLast = pLast->add(new Circle());  // 원 객체 생성
    pLast = pLast->add(new Line());  // 선 객체 생성
    pLast = pLast->add(new Rect());  // 사각형 객체 생성

    // 현재 연결된 모든 도형을 화면에 그린다.
    Shape* p = pStart;
    while (p != NULL) {
        p->paint();
        p = p->getNext();
    }

    // 현재 연결된 모든 도형을 삭제한다.
    p = pStart;
    while (p != NULL) {
        Shape* q = p->getNext();  // 다음 도형 주소 기억
        delete p;  // 현재 도형 객체 소멸 (기본 클래스의 virtual 소멸자 호출)
        p = q;  // 다음 도형의 주소를 p에 저장
    }

    return 0;
}
