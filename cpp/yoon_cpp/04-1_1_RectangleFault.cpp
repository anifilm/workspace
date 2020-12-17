// 정보은닉의 이해
#include <iostream>

using namespace std;

class Point {
public:
    int xpos;      // xpos 좌표의 범위는 0이상 100이하
    int ypos;      // ypos 좌표의 범위는 0이상 100이하
};

class Rectangle {
public:
    Point upLeft;
    Point lowRight;
public:
    void ShowRecInfo() {
        cout << "좌 상단: " << "[" << upLeft.xpos << ", " << upLeft.ypos << "]" << endl;
        cout << "우 하단: " << "[" << lowRight.xpos << ", " << lowRight.ypos << "]" << endl;
    }
};

int main() {

    Point pos1 = {-2, 4};           // 잘못된 위치 정보
    Point pos2 = {5, 9};
    Rectangle rec = {pos2, pos1};   // 잘못된 생성 정보

    rec.ShowRecInfo();

    return 0;
}
