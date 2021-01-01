/* 문제 10-1 [두 가지 방법의 연산자 오버로딩]
문제 2
Point 클래스에 대해서 다음 조건을 만족하는 형태로 +=연산자와 -=연산자를 오버로딩 해보자.
 - 멤버 함수 기반으로 오버로딩
 - 연산 'pos1 += pos2'의 결과로 pos1의 멤버 변수 값이 pos2의 멤버 변수 값만큼 멤버 별 증가
 - 연산 'pos1 -= pos2'의 결과로 pos1의 멤버 변수 값이 pos2의 멤버 변수 값만큼 멤버 별 감소
 - 연산의 결과로 값이 증가 및 감소한 pos1의 객체를 반환하도록(이왕이면 참조형으로 반환 하도록)
   연산자 오버로딩
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
    Point& operator+=(const Point& ref);
    Point& operator-=(const Point& ref);
};

Point& Point::operator+=(const Point& ref) {
    xpos += ref.xpos;
    ypos += ref.ypos;
    return *this;
}

Point& Point::operator-=(const Point& ref) {
    xpos -= ref.xpos;
    ypos -= ref.ypos;
    return *this;
}

int main() {

    Point pos1(10, 20);
    Point pos2(3, 4);

    pos1 += pos2;
    pos1.ShowPosition();

    pos1 -= pos2;
    pos1.ShowPosition();

    return 0;
}
