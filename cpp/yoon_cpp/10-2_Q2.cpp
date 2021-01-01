/* 문제 10-2 [단항 연산자 오버로딩]
문제 2: 전역 함수의 형태로 오버로딩
~연산자는 단항 연산자로서 비트단위 not의 의미를 갖는다. 즉, ~연산자는 비트단위로 1은 0으로,
0은 1로 바꾼다. 이에 우리는 Point 객체를 대상으로 다음과 같이 연산이 가능하도록 ~연산자를
오버로딩 하고자 한다.
  Point pos2 = ~pos1;

위의 ~연산의 결과로 반환된 객체의 xpos멤버에는 pos1의 ypos값이, 반환된 객체의 ypos멤버
에는 pos1의 xpos값이 저장되어야 한다.
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
    friend Point operator~(Point& ref);
};

Point operator~(Point& ref) {
    Point pos(ref.ypos, ref.xpos);
    return pos;
}

int main() {

    Point pos1(10, 20);
    Point pos2 = ~pos1;
    pos1.ShowPosition();
    pos2.ShowPosition();

    return 0;
}
