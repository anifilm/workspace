// 객체 배열 선언 및 활용
#include <iostream>

using namespace std;

class Circle {
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

    Circle circleArray[3];  // Circle 객체 배열 생성 (디폴트 생성자 호출)

    // 배열의 각 원소 객체의 멤버 접근
    circleArray[0].setRadius(10);
    circleArray[1].setRadius(20);
    circleArray[2].setRadius(30);

    for (int i = 0; i < 3; i++)     // 배열의 각 원소 객체의 멤버 접근
        cout << "Circle " << i + 1 << "의 면적은 " << circleArray[i].getArea() << endl;

    Circle* p;
    p = circleArray; // p는 circleArray 배열을 가리킨다.

    for (int i = 0; i < 3; i++) {   // 객체 포인터로 배열 접근
        cout << "Circle " << i + 1 << "의 면적은 " << p->getArea() << endl;
        p++; // 다음 Circle 객체 주소로 증가
    }

    return 0;
}

/*

객체 포인터를 사용하여 객체 배열을 다루는 다양한 사례

1. 포인터 p를 이용하여 객체처럼 접근
Circle* = circleArray;
for (int i = 0; i < 3; i++) {
    cout << (*p++).getArea() << endl;

2. 배열의 이름 circleArray를 포인터로 사용
for (int i = 0; i < 3; i++) {
    cout << (circleArray + i)->getArea() << endl;

3. 포인터 p의 정수 연산 이용
Circle* = circleArray;
for (int i = 0; i < 3; i++) {
    cout << (p + i)->getArea() << endl;

4. 포인터 p를 배열 형식으로 사용
Circle* = circleArray;
for (int i = 0; i < 3; i++) {
    cout << p[i].getArea() << endl;

*/
