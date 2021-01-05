// Point 객체를 스트림에 출력하는 << 연산자 작성
#include <iostream>

using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }
    friend ostream& operator<<(ostream& stream, Point a);
};

// << 연산자 함수
ostream& operator<<(ostream& stream, Point a) {
    stream << "(" << a.x << ", " << a.y << ")";
    return stream;
}

int main() {

    Point p(3, 4);  // Point 객체 생성
    cout << p << endl;  // Point 객체 화면 출력

    Point q(1, 100), r(2, 200);  // Point 객체 생성
    cout << q << r << endl;  // Point 객체를 연속하여 화면 출력

    return 0;
}
