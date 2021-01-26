// 클래스 템플릿의 선언과 정의의 분리
#include <iostream>
#include "PointTemplate.h"
#include "PointTemplate.cpp"  // 템플릿 사용하는 경우 빌드 오류시 추가 필요

int main() {

    Point<int> pos1(3, 4);
    pos1.ShowPosition();

    Point<double> pos2(2.4, 3.6);
    pos2.ShowPosition();

    Point<char> pos3('P', 'F');  // 좌표정보를 문자로 표시하는 상황의 표현
    pos3.ShowPosition();

    return 0;
}
