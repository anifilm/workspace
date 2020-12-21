// Circle 배열의 동적 생성 및 반환
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

    Circle* pArray = new Circle[3]; // 객체 배열의 동적 생성, 각 객체의 디폴트 생성자 Circle() 실행
    pArray[0].setRadius(10);
    pArray[1].setRadius(20);
    pArray[2].setRadius(30);

    for (int i = 0; i < 3; i++)
        cout << pArray[i].getArea() << endl;

    Circle* p = pArray; // 포인터 p에 배열의 주소값 설정
    for (int i = 0; i < 3; i++) {
        cout << p->getArea() << endl;
        p++;    // 다음 요소의 주소로 증가
    }

    delete[] pArray;    // 객체 배열 반환

    return 0;
}
