/* 문제 10-3 [입력을 위한 >> 연산자의 오버로딩]
예제 PointConsoleOutput.cpp에서 정의한 Point 클래스를 대상으로 아래의 main() 함수가
보이는 대로 데이터의 입력이 가능하도록, 그리고 실행의 예에서 보이는 대로 출력이 이뤄지
도록 >> 연산자를 오버로딩 하자.
  (main() 함수 생략...)

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
    friend ostream& operator<<(ostream& os, const Point& pos);
    friend istream& operator>>(istream& os, Point& pos);
};

ostream& operator<<(ostream& os, const Point& pos) {
    os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
    return os;
}

istream& operator>>(istream& os, Point& pos) {
    os >> pos.xpos >> pos.ypos;
    return os;
}

int main() {

    Point pos1;
    cout << "x, y 좌표 순으로 입력: ";
    cin >> pos1;
    cout << pos1;

    Point pos2;
    cout << "x, y 좌표 순으로 입력: ";
    cin >> pos2;
    cout << pos2;

    return 0;
}
