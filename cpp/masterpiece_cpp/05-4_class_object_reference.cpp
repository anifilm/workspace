// 객체에 대한 참조
#include <iostream>

using namespace std;

class Circle {
private:
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int r) { this->radius = r; }
    void setRadius(int r) { this->radius = r; }
    double getArea() { return radius * radius * 3.14; }
};

int main() {

    Circle circle;
    Circle& refc = circle;
    refc.setRadius(10);
    cout << refc.getArea() << " " << circle.getArea();  // 두 호출은 동일 객체에 대한 호출

    return 0;
}
