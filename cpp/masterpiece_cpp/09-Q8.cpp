/*
Q8
문제 7에 주어진 Shape 클래스를 추상 클래스로 만들고 문제 7을 다시 작성하라.

*/
#include <iostream>

using namespace std;

class Shape {
protected:
    string name;  // 도형의 이름
    int width, height;  // 도형이 내접하는 사각형의 너비와 높이
public:
    Shape(string n = "", int w = 0, int h = 0) { name = n; width = w; height = h; }
    virtual double getArea() = 0;  // 순수 virtual 함수 선언
                                   // 추상 클래스는 하나 이상의 순수 virtual 함수를 가지는 클래스
                                   // 객체를 만들 수 없다. (포인터 타입 선언은 가능)
                                   // 추상 클래스의 의도
                                   //  -> 파생 클래스에게 해당 함수를 반드시 구현하도록 지시
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
