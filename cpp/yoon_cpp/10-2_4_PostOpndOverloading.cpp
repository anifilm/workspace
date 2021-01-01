// 전위증가와 후위증가의 구분
#include <iostream>

using namespace std;

class Point {
private:
    int xpos, ypos;
public:
    Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
    void ShowPosition() const {
        cout << '[' << xpos << ", " << ypos << ']' << endl;
    }
    friend Point operator++(Point& ref, int);  // 후위증가
    friend Point operator--(Point& ref, int);  // 후위감소
};

Point operator++(Point& ref, int) {
    Point retobj(ref.xpos, ref.ypos);
    ref.xpos += 1;
    ref.ypos += 1;
    return retobj;
}

Point operator--(Point&ref, int) {
    Point retobj(ref.xpos, ref.ypos);
    ref.xpos -= 1;
    ref.ypos -= 1;
    return retobj;
}

int main() {

    Point pos1(3, 5);
    Point pos2;

    pos2 = pos1++;
    pos2.ShowPosition();  // [3, 5]
    pos1.ShowPosition();  // [4, 6]

    pos2 = pos1--;
    pos2.ShowPosition();  // [4, 6]
    pos1.ShowPosition();  // [3, 5]

    return 0;
}
