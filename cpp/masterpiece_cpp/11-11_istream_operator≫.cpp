// Point 객체를 스트림에 입력받는 >> 연산자 작성
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
    friend istream& operator>>(istream& ins, Point& a);    // friend 선언
    friend ostream& operator<<(ostream& stream, Point a);  // friend 선언
};

// >> 연산자 함수
istream& operator>>(istream& ins, Point& a) {
    cout << "x 좌표: ";
    ins >> a.x;
    cout << "y 좌표: ";
    ins >> a.y;
    return ins;
}

// << 연산자 함수
ostream& operator<<(ostream& stream, Point a) {
    stream << "(" << a.x << ", " << a.y << ")";
    return stream;
}

int main() {

    Point p;    // Point 객체 생성
    cin >> p;   // >> 연산자를 호출하여 x좌표와 y좌표를 키보드로부터 읽어 객체 p 완성
    cout << p;  // << 연산자를 호출하여 객체 p 출력

    return 0;
}
