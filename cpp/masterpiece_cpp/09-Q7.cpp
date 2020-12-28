/*
Q7
Shape 클래스를 상속받아 타원을 표현하는 Oval, 사각형을 표현하는 Rect, 삼각형을 표현
하는 Triangular 클래스를 작성하라. main()을 작성하고 실행하면 다음과 같다.
  (main() 함수, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Shape {
protected:
    string name;  // 도형의 이름
    int width, height;  // 도형이 내접하는 사각형의 너비와 높이
public:
    Shape(string n = "", int w = 0, int h = 0) { name = n; width = w; height = h; }
    virtual double getArea() { return 0; }  // dummy 값 반환
    string getName() { return name; }  // 이름을 반환
};

class Oval : public Shape {
public:
    Oval(string n, int w, int h) : Shape(n, w, h) {}
    virtual double getArea() { return width * height * 3.14; }
};

class Rect : public Shape {
public:
    Rect(string n, int w, int h) : Shape(n, w, h) {}
    virtual double getArea() { return width * height; }

};

class Triangular : public Shape {
public:
    Triangular(string n, int w, int h) : Shape(n, w, h) {}
    virtual double getArea() { return width * height / 2; }
};

int main() {

    Shape* p[3];
    p[0] = new Oval("빈대떡", 10, 20);
    p[1] = new Rect("찰떡", 30, 40);
    p[2] = new Triangular("토스트", 30, 40);

    for (int i = 0; i < 3; i++)
        cout << p[i]->getName() << " 넓이는 " << p[i]->getArea() << endl;

    for (int i = 0; i < 3; i++)
        delete p[i];

    return 0;
}
