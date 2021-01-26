// 배열 클래스의 템플릿화
#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

class Point {
private:
    int xpos, ypos;
public:
    Point(int x = 0, int y = 0);
    friend std::ostream& operator<<(std::ostream& os, const Point& pos);
};

#endif
