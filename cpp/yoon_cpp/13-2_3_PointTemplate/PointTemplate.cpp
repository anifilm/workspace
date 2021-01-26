// 클래스 템플릿의 선언과 정의의 분리
#include <iostream>
#include "PointTemplate.h"

template <class T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y) {}

template <class T>
void Point<T>::ShowPosition() const {
    std::cout << '[' << xpos << ", " << ypos << ']' << std::endl;
}
