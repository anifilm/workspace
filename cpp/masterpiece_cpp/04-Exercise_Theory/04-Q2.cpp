/* 이론 문제
Q2
사용자로부터 폭과 높이 값을 입력받아 동적으로 Rect 객체를 생성하고 면적을 구하여 출력
하는 코드를 작성하고자 한다. 다음 물음에 따라 빈칸을 채워라.
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

    Rect* q;
    int w, h;
    cin >> w >> h;  // 사용자로부터 사각형의 폭과 높이를 w, h에 각각 입력받는다.

//  (1) 포인터 변수 q에 w x h 크기의 사각형을 표현하는 Rect 객체를 동적으로 생성한다.
    q = new Rect(w, h);
//  (2) 포인터 q를 이용하여 사격형의 면적을 출력한다.
    cout << q->getArea() << endl;
//  (3) 생성한 객체를 반환한다.
    delete q;

    return 0;
}
