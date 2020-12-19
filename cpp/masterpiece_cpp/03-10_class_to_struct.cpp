// Circle 클래스를 C++ 구조체를 이용하여 재작성
#include <iostream>

using namespace std;

struct StructCircle {   // C++ 구조체 선언
private:
    int radius;
public:
    StructCircle(int r) { radius = r; } // 구조체의 생성자
    double getArea();
};

double StructCircle::getArea() {
    return radius * radius * 3.14;
}

int main() {

    StructCircle waffle(3);
    cout << "면적은 " << waffle.getArea();

    return 0;
}
