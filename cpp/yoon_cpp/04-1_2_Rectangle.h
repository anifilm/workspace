// 정보은닉의 이해
#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_
#include "04-1_2_Point.h"

class Rectangle {
private:
    Point upLeft;
    Point lowRight;

public:
    bool InitMembers(Point& ul, Point& lr);
    void ShowRecInfo() const;
};

#endif
