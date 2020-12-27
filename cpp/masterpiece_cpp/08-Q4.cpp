/*
Q4
다음 main() 함수가 실행되도록 Point 클래스를 상속받은 ColorPoint 클래스를 작성하고,
전체 프로그램을 완성하라.
  (main() 함수, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Point {
public:
    int x, y;
public:
    Point(int x, int y) { this->x = x; this->y = y; }
    int getX() { return x; }
    int getY() { return y; }
protected:
    void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint : public Point {
private:
    string color;
public:
    ColorPoint(int x = 0, int y = 0, string color = "BLACK")
        : Point(x, y) {
            this->color = color;
    }
    void setPoint(int x, int y) { move(x, y); }
    void setColor(string color) { this->color = color; }
    void show() {
        cout << color << "색으로 (" << getX() << ", " << getY() << ")에 위치한 점입니다." << endl;
    }
};

int main() {

    ColorPoint zeroPoint;  // BLACK색에 (0, 0) 위치의 점
    zeroPoint.show();  // zeroPoint를 출력한다.

    ColorPoint cp(5, 5, "RED");
    cp.setPoint(10, 20);
    cp.setColor("BLUE");
    cp.show();  // cp를 출력한다.

    return 0;
}
