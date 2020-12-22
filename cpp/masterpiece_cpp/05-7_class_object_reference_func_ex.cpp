// 참조 매개 변수를 가진 함수 만들기 연습
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

void readRadius(Circle& d) {
    int r;
    cout << "정수 값으로 반지름을 입력하세요: ";
    cin >> r;   // 반지름 값 입력
    d.setRadius(r); // 반지름 설정
}

int main() {

    Circle donut;
    readRadius(donut);
    cout << "donut의 면적 = " << donut.getArea() << endl;

    return 0;
}
