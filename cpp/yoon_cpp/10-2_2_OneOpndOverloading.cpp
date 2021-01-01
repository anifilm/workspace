// 증가, 감소 연산자의 오버로딩
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
    friend Point& operator++(Point& ref);  // 전위증가
    friend Point& operator--(Point& ref);  // 전위감소
};

Point& operator++(Point& ref) {
    ref.xpos += 1;
    ref.ypos += 1;
    return ref;
}

Point& operator--(Point& ref) {
    ref.xpos -= 1;
    ref.ypos -= 1;
    return ref;
}

int main() {

    Point pos(1, 2);
    ++pos;
    pos.ShowPosition();  // [2, 3]
    --pos;
    pos.ShowPosition();  // [1, 2]

    ++(++pos);
    pos.ShowPosition();  // [3, 4]
    --(--pos);
    pos.ShowPosition();  // [1. 2]

    return 0;
}
