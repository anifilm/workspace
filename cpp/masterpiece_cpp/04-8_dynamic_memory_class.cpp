// Circle 객체의 동적 생성 및 반환 응용
#include <iostream>

using namespace std;

class Circle {
private:
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    void setRadius(int r) { radius = r; }
    double getArea() { return radius * radius * 3.14; }
};

Circle::Circle() {
    radius = 1;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
    radius = r;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
    cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {

    int radius;
    while (true) {
        cout << "정수의 반지름 입력 (음수이면 종료): ";
        cin >> radius;  // 정수 값 반지름 입력
        if (radius < 0) break;  // 음수가 입력되어 종료한다.
        Circle* p = new Circle(radius); // 동적 객체 생성
        cout << "원의 면적은 " << p->getArea() << endl;
        delete p;   // 객체 반환 (delete문이 없다면 메모리 누수 발생)
    }

    return 0;
}
