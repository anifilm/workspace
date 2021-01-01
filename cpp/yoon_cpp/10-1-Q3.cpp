/* 문제 10-1 [두 가지 방법의 연산자 오버로딩]
문제 3
Point 클래스에 대해서 다음 조건을 만족하는 형태로 ==연산자와 !=연산자를 오버로딩 해보자.
 - 둘 다 전역 함수의 형태로 오버로딩
 - 연산 'pos1 == pos2'의 결과로 모든 멤버의 값이 같다면 true, 그렇지 않다면 false 반환
 - 연산 'pos1 != pos2'의 결과로 모든 멤버의 값이 같다면 false, 그렇지 않다면 true 반환
 - 연산자 ==를 먼저 오버로딩 한 다음에, 이를 이용하는 형태로 !=연산자를 오버로딩
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
    friend bool operator==(const Point& pos1, const Point& pos2);
    friend bool operator!=(const Point& pos1, const Point& pos2);
};

bool operator==(const Point& pos1, const Point& pos2) {
    if (pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos) return true;
    else return false;
}

bool operator!=(const Point& pos1, const Point& pos2) {
    if (pos1.xpos != pos2.xpos && pos1.ypos != pos2.ypos) return true;
    else return false;
}

int main() {

    Point pos1(10, 20);
    Point pos2(10, 20);
    Point pos3(11, 22);

    if (pos1 == pos2)
        cout << "두 객체의 수가 같다." << endl;

    if (pos1 != pos3)
        cout << "두 객체의 수가 같지 않다." << endl;

    return 0;
}
