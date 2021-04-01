// Point 클래스 템플릿과 배열 클래스 템플릿
#ifndef __POINT_TEMPLATE_H__
#define __POINT_TEMPLATE_H__

#include <iostream>

template <typename T>
class Point {
private:
    T xpos, ypos;
public:
    Point(T x = 0, T y = 0);
    void ShowPosition() const;
};

template <typename T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y) {}

template <typename T>
void Point<T>::ShowPosition() const {
    std::cout << '[' << xpos << ", " << ypos << ']' << std::endl;
}

#endif
