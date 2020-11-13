// 정보은닉의 이해
#ifndef __POINT_H_
#define __POINT_H_

class Point {
private:
    int xpos;      // xpos 좌표의 범위는 0이상 100이하
    int ypos;      // ypos 좌표의 범위는 0이상 100이하
public:
    bool InitMembers(int x, int y);
    int GetX() const;
    int GetY() const;
    bool SetX(int x);
    bool SetY(int y);
};

#endif
