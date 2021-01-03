/*
Q8
문제 7을 푸는 다른 방법을 소개한다.
bigger() 함수의 다음 라인에서 > 연산자 때문에
  if (a > b) return a;

T에 Circle과 같은 클래스 타입이 대입되면, 구체화가 실패하여 컴파일 오류가 발생한다. 이 문제를
해결하기 위해 다음과 같은 추상 클래스 Comparable을 제안한다.
  (추상 클래스 생략...)

Circle 클래스가 Comparable을 상속받아 순수 가상 함수를 모두 구현하면, 앞의 bigger() 템플릿
함수를 사용하는데 아무 문제가 없다. Circle뿐 아니라, Comparable을 상속받은 모든 클래스를
bigger()에 사용할 수 있다. Comparable을 상속받은 Circle 클래스를 완성하고 문제 7의 main()
을 실행하여 테스트 하라.
*/
#include <iostream>

using namespace std;

class Comparable {  // 추상 클래스
public:
    virtual bool operator>(Comparable& op2) = 0;  // 순수 가상 함수
    virtual bool operator<(Comparable& op2) = 0;
    virtual bool operator==(Comparable& op2) = 0;
};

class Circle : public Comparable {
private:
    int radius;
public:
    Circle(int radius = 1) { this->radius = radius; }
    int getRadius() { return radius; }
    bool operator>(Comparable& op2);
    bool operator<(Comparable& op2);
    bool operator==(Comparable& op2);
};

bool Circle::operator>(Comparable& op2) {
    Circle* op;
    op = (Circle*)&op2;
    if (this->radius > op->getRadius()) return true;
    else return false;
}

bool Circle::operator<(Comparable& op2) {
    Circle* op;
    op = (Circle*)&op2;
    if (this->radius < op->getRadius()) return true;
    else return false;
}

bool Circle::operator==(Comparable& op2) {
    Circle* op;
    op = (Circle*)&op2;
    if (this->radius == op->getRadius()) return true;
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
