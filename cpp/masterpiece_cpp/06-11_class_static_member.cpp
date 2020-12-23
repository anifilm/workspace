// static 멤버를 공유의 목적으로 사용하는 예
#include <iostream>

using namespace std;

class Circle {
private:
    static int numOfCircles;    // 생성된 원의 개수 기억
    int radius;
public:
    Circle(int r = 1);
    ~Circle() { numOfCircles--; }    // 생성된 원의 개수 감소
    double getArea() { return radius * radius * 3.14; }
    static int getNumOfCircles() { return numOfCircles; }
};

Circle::Circle(int r) {
    radius = r;
    numOfCircles++; // 생성된 원의 개수 증가
}

int Circle::numOfCircles = 0;   // 0으로 초기화

int main() {

    Circle* p = new Circle[10]; // 10개의 생성자 실행, numOfCircles = 10
    cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

    delete[] p; // 10개의 소멸자 실행, numOfCircles = 0이 됨
    cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

    Circle a; // 생성자 실행, numOfCircles = 1이 됨
    cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

    Circle b; // 생성자 실행, numOfCircles = 2가 됨
    cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

    return 0;
}
