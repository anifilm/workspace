/* 이론 문제
Q1
Rect의 객체를 다루는 다음 코드를 작성하려고 한다. 아래의 문제에 따라 빈칸에 적절한
코드를 작성하라.
*/
#include <iostream>

using namespace std;

/* 1~5번 문제에 사용되는 Rect 클래스, Rect 클래스는 폭과 높이로 사각형을 추상화 한다. */
class Rect {
    int width, height;
public:
    Rect(int w, int h) { width = w; height = h; }
    int getWidth() { return width; }
    int getHeight() { return height; }
    int getArea();
};

int Rect::getArea() {
    return width * height;
}

int main() {

    Rect r(2, 3);

//  (1) Rect 클래스에 대한 포인터 변수 p를 선언하라.
    Rect* p;
//  (2) 선언된 포인터 변수 p에 객체 r의 주소를 지정하라.
    p = &r;
//  (3) 포인터 변수 p를 이용하여 객체 r의 폭과 높이를 출력하라.
    cout << p->getWidth() << ", " << p->getHeight() << endl;

    return 0;
}
