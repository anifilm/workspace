/*
Q8
원을 추상화한 Circle 클래스는 간단히 아래와 같다.
  (Circle 클래스 생략...)

다음 연산이 가능하도록 연산자를 프렌드 함수로 작성하라.
  (연산 내용, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class Circle {
private:
    int radius;
public:
    Circle(int radius = 0) { this->radius = radius; }
    void show() { cout << "radius = " << radius << "인 원" << endl; }

    friend Circle& operator++(Circle& op);  // 전위 ++
    friend Circle operator++(Circle& op, int x);  // 후위 ++
};

Circle& operator++(Circle& op) {
    op.radius++;
    return op;
}

Circle operator++(Circle& op, int x) {
    Circle tmp = op;
    op.radius++;
    return tmp;
}

int main() {

    Circle a(5), b(4);
    ++a;  // 반지름을 1증가 시킨다.
    b = a++;  // 반지름을 1증가 시킨다.
    a.show();
    b.show();

    return 0;
}
