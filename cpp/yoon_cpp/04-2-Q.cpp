/* 문제 04-2 [다양한 클래스의 정의]
다음의 Point 클래스를 기반으로 하여 (활용하여) 원을 의미하는 Circle 클래스를
정의하자.

class Point {
private:
    int xpos, ypos;

public:
    void Init(int x, int y) {
        xpos = x;
        ypos = y;
    }

    void ShowPointInfo() const {
        cout << "[" << xpos << ", " << ypos << "]" << endl;
    }
};

Circle 객체에는 좌표상의 위치 정보 (원의 중심좌표)와 반지름의 길이 정보를 저장 및
출력할 수 있어야 한다. 그리고 여러분이 정의한 Circle 클래스를 기반으로 Ring 클래스도
정의하자. 링은 두 개의 원으로 표현 가능하므로 (바깥쪽 원과 안쪽 원), 두 개의 Circle
객체를 기반으로 정의가 가능하다. 참고로 안족 원과 바깥쪽 원의 중심좌표가 동일하다면
두께가 일정한 링을 표현하는 셈이 되며, 중심 좌표가 동일하지 않다면 두께가 일정하지
않은 링을 표현하는 셈이 된다. 이렇게 해서 클래스의 정의가 완료되었다면 다음 main 함수
를 기반으로 실행을 시키자.

int main(void) {
    Ring ring;
    ring.Init(1, 1, 4, 2, 2, 9);
    rint.ShowRingInfo();
    return 0;
}

Init 함수호출을 통해서 전달된 1, 1, 4는 안쪽 원의 정보에 해당하며 (순서대로 X좌표,
Y좌표, 반지름), 이어서 전달된 2, 2, 9는 바깥쪽 원의 정보에 해당한다. (순서대로 X좌표,
Y좌표, 반지름) 그리고 실행결과는 다음과 같거나 유사해야 한다.

[실행의 예]
Inner Circle Info...
radius: 4
[1, 1]
Outter Circle Info...
radius: 9
[2, 2]

참고로 하나의 클래스를 정의하더라도, 항상 캡슐화를 고민하기 바란다. 이 문제의 답안도
캡슐화에 대한 고민여부에 따라서 차이를 보일 수 있다.
*/
#include <iostream>

using namespace std;

class Point {
private:
    int xpos, ypos;

public:
    void Init(int x, int y) {
        xpos = x;
        ypos = y;
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
    void Init(int x, int y, int r) {
        rad = r;
        center.Init(x, y);
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
    void Init(int cix, int ciy, int cir, int cox, int coy, int cor) {
        inCircle.Init(cix, ciy, cir);
        outCircle.Init(cox, coy, cor);
    }
    void ShowRingInfo() const {
        cout << "Inner Circle Info..." << endl;
        inCircle.ShowCircleInfo();
        cout << "Outter Circle Info..." << endl;
        outCircle.ShowCircleInfo();
    }
};

int main() {

    Ring ring;
    ring.Init(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();

    return 0;
}
