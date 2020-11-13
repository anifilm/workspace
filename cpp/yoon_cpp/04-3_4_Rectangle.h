// 멤버 이니셜라이저 (Member Initializer)를 이용한 멤버 초기화
#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_
#include "04-3_4_Point.h"

class Rectangle {
private:
    Point upLeft;
    Point lowRight;
public:
//  bool InitMembers(Point& ul, Point& lr);
    Rectangle(const int& x1, const int& y1, const int& x2, const int& y2);
    void ShowRecInfo() const;
};

#endif
