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
    friend Point operator*(int times, Point& ref);
};

Point Point::operator*(int times) {
    Point pos(xpos * times, ypos * times);
    return pos;
}

Point operator*(int times, Point& ref) {
    return ref * times;
}

int main() {

    Point pos1(1, 2);
    Point pos2;

    pos2 = 3 * pos1;
    pos2.ShowPosition();

    pos2 = 3 * pos1 * 2;
    pos2.ShowPosition();

    return 0;
}
