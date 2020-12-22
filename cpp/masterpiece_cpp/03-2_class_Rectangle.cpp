// Rectangle 클래스 만들기
#include <iostream>

using namespace std;

// Rectangle 클래스 선언부
class Rectangle {
public:
    int width;
    int height;
    getArea();  // 면적을 계산하여 리턴하는 함수
};

// Rectangle 클래스 구현부
int Rectangle::getArea() {
    return width * height;
}

int main() {

    Rectangle rect;
    rect.width = 3;
    rect.height = 5;
    cout << "사각형의 면적은 " << rect.getArea() << endl;

    return 0;
}
