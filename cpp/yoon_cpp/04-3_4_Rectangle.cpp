// 멤버 이니셜라이저 (Member Initializer)를 이용한 멤버 초기화
#include <iostream>
#include "04-3_4_Rectangle.h"

using namespace std;

/*
bool Rectangle::InitMembers(Point& ul, Point& lr) {
    if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY()) {
        cout << "잘못된 위치정보 전달" << endl;
        return false;
    }
    upLeft = ul;
    lowRight = lr;
    return true;
}
*/
Rectangle::Rectangle(const int& x1, const int& y1, const int& x2, const int& y2)
    : upLeft(x1, y1), lowRight(x2, y2) {
    // empty
}

void Rectangle::ShowRecInfo() const {
    cout << "좌 상단: " << "[" << upLeft.GetX() << ", " << upLeft.GetY() << "]" << endl;
    cout << "우 하단: " << "[" << lowRight.GetX() << ", " << lowRight.GetY() << "]" << endl;
}
