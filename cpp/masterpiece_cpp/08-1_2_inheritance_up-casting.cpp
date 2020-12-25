// 파생 클래스의 객체 cp를 기본 클래스의 포인터 pBase로 접근하는 업 캐스팅
#include <iostream>

using namespace std;

class Point {  // 2차원 평면에서 한 점을 표현하는 클래스 Point 선언
private:
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
};

void ColorPoint::showColorPoint() {
    cout << color << ": ";
    showPoint();  // Point의 showPoint() 호출 (파생 클래스에서 기본 클래스 멤버 호출)
}

int main() {

    ColorPoint cp;
    ColorPoint* pDer = &cp;

    pDer->set(3, 4);
    pDer->showPoint();
    pDer->setColor("Red");
    pDer->showColorPoint();

//  Point* pBase = pDer;  // 업 캐스팅
    Point* pBase = &cp;   // 업 캐스팅

    pBase->set(5, 6);
    pBase->showPoint();
//  pBase->showColorPoint();  // 컴파일 오류

    return 0;
}

/*

업 캐스팅(up-casting)이란 파생 클래스의 객체를 기본 클래스의 포인터로 가리키는 것을 말한다.
ColorPoint cp; // 파생 클래스의 객체
Point*  // 기본 클래스의 포인터
Point* pBase = &cp; // 기본 클래스의 포인터로 가리키는 것

pDer 포인터로 객체 cp의 모든 public 멤버 접근 가능
pBase 포인터로 기본 클래스의 public 멤버만 접근 가능

*/
