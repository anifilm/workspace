/*
Q9
문제 8번의 Circle 객체에 대해 다음 연산이 가능하도록 연산자를 구현하라.
  (연산 내용, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius = 0) { this->radius = radius; }
    void show() { cout << "radius = " << radius << "인 원" << endl; }

    friend Circle operator+(int op1, Circle op2);
};

Circle operator+(int op1, Circle op2) {
    Circle tmp;
    tmp.radius = op1 + op2.radius;
    return tmp;
}

int main() {

    Circle a(5), b(4);
    b = 1 + a;  // b의 반지름을 a의 반지름에 1을 더한 것으로 변경
    a.show();
    b.show();

    return 0;
}
