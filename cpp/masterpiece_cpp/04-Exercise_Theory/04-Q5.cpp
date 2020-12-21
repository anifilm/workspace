/* 이론 문제
Q5
Rect 클래스에 다음과 같은 기본 생성자를 삽입하고,
  Rect() { width = 1, height = 1; }
다음 배열 r 생성 후, 배열 r의 사각형 면적의 합을 출력하는 코드를 작성하라.
  Rect r[5] = { Rect(), Rect(2, 3), Rect(3, 4), Rect(4, 5), Rect(5, 6) };
*/
#include <iostream>

using namespace std;

/* 1~5번 문제에 사용되는 Rect 클래스, Rect 클래스는 폭과 높이로 사각형을 추상화 한다. */
class Rect {
    int width, height;
public:
    Rect() { width = 1; height = 1; }
    Rect(int w, int h) { width = w; height = h; }
    int getWidth() { return width; }
    int getHeight() { return height; }
    int getArea();
};

int Rect::getArea() {
    return width * height;
}

int main() {

    Rect r[5] = { Rect(), Rect(2, 3), Rect(3, 4), Rect(4, 5), Rect(5, 6) };

    int sumArea = 0;
    for (int i = 0; i < 5; i++) {
        sumArea += r[i].getArea();
    }
    cout << "배열 r의 사각형 면적은 합은 " << sumArea << endl;

    return 0;
}
