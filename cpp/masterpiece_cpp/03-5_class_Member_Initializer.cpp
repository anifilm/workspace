// 멤버 변수 초기화와 위임 생성자 활용
#include <iostream>

using namespace std;

class Point {
    int x, y;
public:
    Point();
    Point(int a, int b);
    void show() { cout << "(" << x << ", " << y << ")" << endl; }
};

// 위임 생성자
Point::Point() : Point(0, 0) {  // Point(int a, int b) 생성자 호출
}

// 타겟 생성자
Point::Point(int a, int b)
    : x(a), y(b) {
}

int main() {

    Point origin;
    Point target(10, 20);
    origin.show();
    target.show();

    return 0;
}

/*

생성자 코드에서 멤버 변수 초기화

class Point {
    int x, y;
public:
    Point();
    Point(int a, int b);
};

Point::Point() { x = 0; y = 0; }
Point::Point(int a, int b) { x = a; y = b; }


생성자 서두에 초기값으로 초기화 1

Point::Point() : x(0), y(0) {   // 멤버 변수 x, y를 0으로 초기화
}
Point::Point(int a, int b)      // 멤버 변수 x = a로, y = b로 초기화
    : x(a), y(b) {              // 콜론(:) 이하 부분을 다음 줄에 써도 됨
}


생성자 서두에 초기값으로 초기화 2

Point::Point(int a)
    : x(a), y(0) {              // 멤버 변수 x = a, y = 0으로 초기화
}
Point::Point(int a)
    : x(a + 100), y(100) {      // 멤버 변수 x = a + 100, y = 100으로 초기화
}


클래스 선언부에서 직접 초기화 (C++11부터 지원)
class Point {
    int x = 0, y = 0;   // 클래스 선언부에서 x, y를 0으로 직접 초기화
    ...
};
*/
