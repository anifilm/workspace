/* 문제 04-3 [C++ 기반의 데이터 입출력]
문제 1
앞서 제시한 문제 04-2를 해결하였는가? 당시만 해도 생성자를 설명하지 않은 상황이기 때문에
별도의 초기화 함수를 정의 및 호출해서 Point, Circle, Ring 클래스의 객체를 초기화 하였다.
이때 구현한 답에 대해서 모든 클래스에 생성자를 정의해 보자.
*/
#include <iostream>

using namespace std;

class Point {
private:
    int xpos, ypos;
public:
    /*
    void Init(int x, int y) {
        xpos = x;
        ypos = y;
    }
    */
    Point(const int& x, const int& y)
        : xpos {x}, ypos {y} {
    }
    void ShowPointInfo() const {
        cout << "[" << xpos << ", " << ypos << "]" << endl;
    }
};

class Circle {
private:
    int rad;        // 반지름
    Point center;   // 원의 중심
public:
    /*
    void Init(int x, int y, int r) {
        rad = r;
        center.Init(x, y);
    }
    */
    Circle(const int& x, const int& y, const int& r)
        : rad {r}, center {x, y} {
    }
    void ShowCircleInfo() const {
        cout << "radius: " << rad << endl;
        center.ShowPointInfo();
    }
};

class Ring {
private:
    Circle inCircle;
    Circle outCircle;
public:
    /*
    void Init(int cix, int ciy, int cir, int cox, int coy, int cor) {
        inCircle.Init(cix, ciy, cir);
        outCircle.Init(cox, coy, cor);
    }
    */
    Ring(int cix, int ciy, int cir, int cox, int coy, int cor)
        : inCircle {cix, ciy, cir}, outCircle {cox, coy, cor} {
    }
    void ShowRingInfo() const {
        cout << "Inner Circle Info..." << endl;
        inCircle.ShowCircleInfo();
        cout << "Outter Circle Info..." << endl;
        outCircle.ShowCircleInfo();
    }
};

int main() {

    Ring ring {1, 1, 4, 2, 2, 9};
    ring.ShowRingInfo();

    return 0;
}
