// protected 멤버에 대한 접근
#include <iostream>

using namespace std;

class Point {  // 2차원 평면에서 한 점을 표현하는 클래스 Point 선언
protected:     // 상속 개체에서 접근 가능하도록 protected로 지정 (파생 클래스에서 접근 가능)
    int x, y;  // 한 점 (x, y) 좌표값
public:
    void set(int x, int y) { this->x = x; this->y = y; }
    void showPoint() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

class ColorPoint : public Point {  // 2차원 평면에서 컬러 점을 표현하는 클래스 ColorPoin. Point를 상속받음
private:
    string color;  // 점의 색 표현
public:
    void setColor(string color) { this->color = color; }
    void showColorPoint();
    bool equals(ColorPoint p);
};

void ColorPoint::showColorPoint() {
    cout << color << ": ";
    showPoint();  // Point의 showPoint() 호출 (파생 클래스에서 기본 클래스 멤버 호출)
}

bool ColorPoint::equals(ColorPoint p) {  // 파생 클래스의 멤버 함수에서 기본 클래스의 멤버 변수에 접근
    if (x == p.x && y == p.y && color == p.color)
        return true;
    else
        return false;
}

int main() {

    Point p;  // 기본 클래스의 객체 생성
    p.set(2, 3);
//  p.x = 5;  // 멤버 변수는 protected이므로 접근 불가
//  p.y = 5;
    p.showPoint();

    ColorPoint cp;  // 파생 클래스의 객체 생성
//  cp.x = 10;      // 기본 클래스의 멤버 변수는 protected이므로 접근 불가
//  cp.y = 10;
    cp.set(3, 4);
    cp.setColor("Red");

    ColorPoint cp2;
    cp2.set(3, 4);
    cp2.setColor("Red");
    cout << ((cp.equals(cp2)) ? "true" : "false") << endl;

    return 0;
}

/*

멤버의 접근 지정에 따른 접근 가능 여부

                        private 멤버      protected 멤버       public 멤버
멤버를 선언한 클래스         가능               가능                가능
파생 클래스                 불가               가능                가능
다른 클래스나 외부 함수      불가               불가                가능

*/
