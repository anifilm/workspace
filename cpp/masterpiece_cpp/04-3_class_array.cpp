// 객체 배열 초기화
#include <iostream>

using namespace std;

class Circle {
private:
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int r) { radius = r; }
    void setRadius(int r) { radius = r; }
    double getArea();
};

double Circle::getArea() {
    return radius * radius * 3.14;
}

int main() {

    // Circle 객체 배열 생성 및 초기화 (각 원소에 대한 개별 생성자 호출 가능)
    Circle circleArray[3] = { Circle(10), Circle(20), Circle() };
    /*
    circleArray[0] 객체가 생성될 때, 생성자 Circle(10)
    circleArray[1] 객체가 생성될 때, 생성자 Circle(20)
    circleArray[2] 객체가 생성될 때, 디폴트 생성자 Circle()이 호출된다.
    */

    for (int i = 0; i < 3; i++)     // 배열의 각 원소 객체의 멤버 접근
        cout << "Circle " << i + 1 << "의 면적은 " << circleArray[i].getArea() << endl;

    return 0;
}
