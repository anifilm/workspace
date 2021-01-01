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
    Point& operator++();  // 전위증가
    Point& operator--();  // 전위감소
};

Point& Point::operator++() {
    xpos += 1;
    ypos += 1;
    return *this;
}

Point& Point::operator--() {
    xpos -= 1;
    ypos -= 1;
    return *this;
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
