/* 이론 문제
Q4
Rect 객체의 배열을 생성하는 다음 코드는 컴파일 오류가 발생한다. 컴파일 오류가 발생하지
않기 위해 Rect 클래스를 어떻게 수정하여야 하는가?
  Rect* p = new Rect[10];
*/
#include <iostream>

using namespace std;

/* 1~5번 문제에 사용되는 Rect 클래스, Rect 클래스는 폭과 높이로 사각형을 추상화 한다. */
class Rect {
    int width, height;
public:
    Rect() {}   // Answer: 디폴트 생성자를 정의하여 준다.
    Rect(int w, int h) { width = w; height = h; }
    int getWidth() { return width; }
    int getHeight() { return height; }
    int getArea();
};

int Rect::getArea() {
    return width * height;
}

int main() {

    Rect* p = new Rect[10];

    return 0;
}
