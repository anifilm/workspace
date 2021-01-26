// 배열 클래스의 템플릿화
#include <iostream>
#include "Point.h"

Point::Point(int x, int y) : xpos(x), ypos(y) {}

std::ostream& operator<<(std::ostream& os, const Point& pos) {
    os << '[' << pos.xpos << ", " << pos.ypos << ']' << std::endl;
    return os;
}
