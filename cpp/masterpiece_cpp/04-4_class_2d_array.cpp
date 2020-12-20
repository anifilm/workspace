// Circle 클래스의 2차원 배열 선언 및 활용
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

    Circle circles[2][3];   // 2행 3열의 2차원 객체 배열 생성

    circles[0][0].setRadius(1);
    circles[0][1].setRadius(2);
    circles[0][2].setRadius(3);
    circles[1][0].setRadius(4);
    circles[1][1].setRadius(5);
    circles[1][2].setRadius(6);

    for (int i = 0; i < 2; i++) {   // 배열의 각 원소 객체의 멤버 접근
        for (int j = 0; j < 3; j++) {
            cout << "Circle [" << i << ", " << j << "]의 면적은 ";
            cout << circles[i][j].getArea() << endl;
        }
    }

    return 0;
}

/*

2차원 배열 역시 다음과 같이 { }안에 생성자를 지정하여 배열을 초기화 할 수 있다.

Circle circles[2][3] = {
    { Circle(1), Circle(2), Circle(3) },
    { Circle(4), Circle(5), Circle(6) }
};

*/
