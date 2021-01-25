// () 연산자의 오버로딩과 펑터 (Functor)
#include <iostream>

using namespace std;

class Point {
private:
    int xpos, ypos;
public:
    Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
    Point operator+(const Point& pos) const {
        return Point(xpos + pos.xpos, ypos + pos.ypos);
    }
    friend ostream& operator<<(ostream& os, const Point& pos);
};

ostream& operator<<(ostream& os, const Point& pos) {
    os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
    return os;
}

class Adder {
public:
    int operator()(const int& n1, const int& n2) {
        return n1 + n2;
    }
    double operator()(const double& e1, const double& e2) {
        return e1 + e2;
    }
    Point operator()(const Point& pos1, const Point& pos2) {
        return pos1 + pos2;
    }
};

int main() {

    Adder adder;
    cout << adder(1, 3) << endl;
    cout << adder(1.5, 3.7) << endl;
    cout << adder(Point(3, 4), Point(7, 9));

    return 0;
}

/*

위 예제에서 정의한 Adder 클래스와 같이 함수처럼 동작하는 클래스를 가리켜 '펑터(Functor)'라 한다.
그리고 '함수 오브젝트(Function Object)'라고도 불린다.

*/
