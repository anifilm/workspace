/*
Q2
다음과 같이 배열을 선언하여 다음 실행 결과가 나오도록 Circle을 상속받은 NamedCircle
클래스와 main() 함수 등 필요한 함수를 작성하라.
  NamedCircle pizza[5];

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
    NamedCircle() : Circle(0) { name = ""; }
    NamedCircle(int radius, string name)
        : Circle(radius) {
            this->name = name;
    }
    string getName() { return name; }
    void setName(string name) { this->name = name; }
    void show() {
        cout << "반지름이 " << getRadius() << "인 " << this->name << endl;
    }
};

int main() {

    NamedCircle pizza[5];
    int radius;
    string name;
    cout << "5개의 정수 반지름과 원의 이름을 입력하세요." << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ": ";
        cin >> radius >> name;
        pizza[i].setRadius(radius);
        pizza[i].setName(name);
    }
    double max = pizza[0].getArea();
    for (int i = 1; i < 5; ++i) {
        if (max < pizza[i].getArea()) {
            max = pizza[i].getArea();
            name = pizza[i].getName();
        }
    }
    cout << "가장 면적이 큰 피자는 " << name << " 입니다." << endl;

    return 0;
}
