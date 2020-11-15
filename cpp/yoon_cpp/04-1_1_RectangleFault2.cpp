// 정보은닉의 이해 (멤버변수를 private로 선언)
#include <iostream>

using namespace std;

class Point {
private:
    int xpos;      // xpos 좌표의 범위는 0이상 100이하
    int ypos;      // ypos 좌표의 범위는 0이상 100이하
public:
    void InitMembers(int x, int y) { xpos = x; ypos = y; }
    int GetX() const { return xpos; }
    int GetY() const { return ypos; }
    void SetX(int x) { xpos = x; }
    void SetY(int y) { ypos = y; }
};

class Rectangle {
private:
    Point upLeft;
    Point lowRight;
public:
    void InitMembers(Point& ul, Point& lr) { upLeft = ul; lowRight = lr; }
    void ShowRecInfo() {
        cout << "좌 상단: " << "[" << upLeft.GetX() << ", " << upLeft.GetY() << "]" << endl;
        cout << "우 하단: " << "[" << lowRight.GetX() << ", " << lowRight.GetY() << "]" << endl;
    }
};

int main() {

    Point pos1;
    pos1.InitMembers(-2, 4);        // 잘못된 위치 정보
    Point pos2;
    pos2.InitMembers(5, 9);

    Rectangle rec;
    rec.InitMembers(pos2, pos1);     // 잘못된 생성 정보
    rec.ShowRecInfo();

    return 0;
}
