// 멤버 이니셜라이저 (Member Initializer)를 이용한 멤버 초기화
#ifndef __POINT_H_
#define __POINT_H_

class Point {
private:
    int xpos;      // xpos 좌표의 범위는 0이상 100이하
    int ypos;      // ypos 좌표의 범위는 0이상 100이하

public:
//  bool InitMembers(int x, int y);
    Point(const int& x, const int& y);
    int GetX() const;
    int GetY() const;
    bool SetX(int x);
    bool SetY(int y);
};

#endif
