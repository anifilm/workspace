// 자료형이 다른 두 피연산자를 대상으로 하는 연산
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
    Point operator*(int times);
};

Point Point::operator*(int times) {
    Point pos(xpos * times, ypos * times);
    return pos;
}


int main() {

    Point pos1(1, 2);
    Point pos2;

    pos2 = pos1 * 3;
    pos2.ShowPosition();

    pos2 = pos1 * 3 * 2;
    pos2.ShowPosition();

    return 0;
}
