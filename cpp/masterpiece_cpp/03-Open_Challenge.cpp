/*
Open Challenge 지수 표현 클래스 만들기
실수의 지수 표현을 클랙스 Exp로 작성하라. Exp를 이용하는 main() 함수와 실행 결과는
다음과 같다. 클래스 Exp를 Exp.h 헤더 파일과 Exp.cpp 파일로 분리하여 작성하라.
*/
#include <iostream>

using namespace std;

class Exp {
private:
    int base;
    int exp;
public:
    Exp();
    Exp(int b);
    Exp(int b, int p);

    int getValue();     // 지수를 정수로 계산하여 리턴
    int getBase();      // 베이스 값 리턴
    int getExp();       // 지수 값 리턴
    bool equals(Exp e); // 이 객체와 객체 b의 값이 같은지 판별하여 리턴
};

Exp::Exp() {
    base = 1;
    exp = 1;
}
Exp::Exp(int b) {
    base = b;
    exp = 1;
}
Exp::Exp(int b, int p) {
    base = b;
    exp = p;
}

int Exp::getValue() {
    int n = 1;
    for (int i = 0; i < exp; i++)
        n *= base;
    return n;
}

int Exp::getBase() {
    return base;
}

int Exp::getExp() {
    return exp;
}

bool Exp::equals(Exp e) {
    if (this->getValue() == e.getValue())
        return true;
    else
        return false;
}

int main() {

    Exp a(3, 2);    // 3² = 9, 베이스 3, 지수 2
    Exp b(9);       // 9¹ = 9, 베이스 9, 지수 1
    Exp c;          // 1¹, 베이스 1, 지수 1

    cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
    cout << "a의 베이스 " << a.getBase() << ", 지수 " << a.getExp() << endl;

    if (a.equals(b))
        cout << "same" << endl;
    else
        cout << "not same" << endl;

    return 0;
}
