/* 문제 10-1 [두 가지 방법의 연산자 오버로딩]
문제 1
Point 클래스에 대해서 다음 조건을 만족하는 형태로 -연산자를 오버로딩 해보자.
 - 전역 함수 기반으로 오버로딩
 - 멤버 별 -연산의 결과를 담은 Point 객체 반환
*/
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
    friend Point operator-(const Point& pos1, const Point& pos2);
};

Point operator-(const Point& pos1, const Point& pos2) {
    Point pos(pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos);
    return pos;
}

int main() {

    Point pos1(10, 20);
    Point pos2(3, 4);
    Point pos3 = pos1 - pos2;

    pos1.ShowPosition();
    pos2.ShowPosition();
    pos3.ShowPosition();

    return 0;
}
