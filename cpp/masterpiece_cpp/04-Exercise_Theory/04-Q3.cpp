/* 이론 문제
Q3
Rect 객체나 배열을 생성하는 다음 코드 중 컴파일 오류가 발생하는 것은?
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

//  Rect a;  // Rect 클래스에 디폴트 생성자가 정의되어 있지 않음
    Rect b(5, 6);
    Rect c[2] = { Rect(1, 1), Rect(2, 3) };
    Rect d[2][3] = {
        { Rect(1, 2), Rect(2, 3), Rect(3, 4) },
        { Rect(1, 1), Rect(2, 2), Rect(3, 3) }
    };

    return 0;
}
