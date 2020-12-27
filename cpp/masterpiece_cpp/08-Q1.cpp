/*
Q1
다음 코드가 실행되도록 Circle을 상속받은 NamedCircle 클래스를 작성하고 전체 프로그램
을 완성하라.
  NamedCircle waffle(3, "waffle");  // 반지름이 3이고 이름이 waffle인 원
  waffle.show();

  (실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Circle {
private:
    int radius;
public:
    Circle(int radius = 0) { this->radius = radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return radius * radius * 3.14; }
};

class NamedCircle : public Circle {
    string name;
public:
    NamedCircle(int radius, string name)
        : Circle(radius) {
            this->name = name;
    }
    void show() {
        cout << "반지름이 " << getRadius() << "인 " << this->name << endl;
    }
};

int main() {

    NamedCircle waffle(3, "waffle");  // 반지름이 3이고 이름이 waffle인 원
    waffle.show();

    return 0;
}
