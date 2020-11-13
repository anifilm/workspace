// 정보은닉의 이해
#include <iostream>
#include "04-1_2_Point.h"

using namespace std;

bool Point::InitMembers(int x, int y) {
    if (x < 0 || y < 0) {
        cout << "벗어난 범위의 값 전달" << endl;
        return false;
    }
    xpos = x;
    ypos = y;
    return true;
}

int Point::GetX() const { return xpos; }
int Point::GetY() const { return ypos; }

bool Point::SetX(int x) {
    if (0 > x || x > 100) {
        cout << "벗어난 범위의 값 전달" << endl;
        return false;
    }
    xpos = x;
    return true;
}

bool Point::SetY(int y) {
    if (0 > y || y > 100) {
        cout << "벗어난 범위의 값 전달" << endl;
        return false;
    }
    ypos = y;
    return true;
}
