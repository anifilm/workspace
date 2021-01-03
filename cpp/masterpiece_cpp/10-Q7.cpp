/*
Q7
다음 프로그램은 컴파일 오류가 발생한다. 소스의 어디에서 왜 컴파일 오류가 발생하는가?
  (소스 생략...)
-> Circle 객체에 대한 비교 연산에 대하여, 클래스에서 수행 가능한 연산자가 없어서 컴파일 에러 발생
   따라서 Circle 클래스에 > 연산자 정의가 필요하다.

아래 결과와 같이 출력되도록 프로그램을 수정하라.
  (실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Circle {
private:
    int radius;
public:
    Circle(int radius = 1) { this->radius = radius; }
    int getRadius() { return radius; }
    bool operator>(Circle op2);
};

bool Circle::operator>(Circle op2) {
    if (this->radius > op2.radius) return true;
    else return false;
}

template <class T>
T bigger(T a, T b) {  // 두 개의 매개 변수를 비교하여 큰 값을 반환
    if (a > b) return a;
    else return b;
}

int main() {

    int a = 20, b = 50, c;
    c = bigger(a, b);
    cout << "20과 50중 큰 값은 " << c << endl;

    Circle waffle(10), pizza(20), y;
    y = bigger(waffle, pizza);
    cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl;

    return 0;
}
