/*
Q5
디지털 회로에서 기본적은 게이트로 OR게이트, AND게이트, XOR게이트 등이 있다. 이들은 각각
두 입력 신호를 받아 OR연산, AND연산, XOR연산을 수행한 결과를 출력한다. 이 게이트들을
각각 ORGate, XORGate, ANDGate 클래스로 작성하고자 한다. ORGate, XORGate, ANDGate
클래스가 AbstractGate를 상속 받도록 작성하라.
  (AbstractGate 클래스, 활용 코드, 실행 결과 생략...)

*/
#include <iostream>

using namespace std;

class AbstractGate {  // 추상 클래스
protected:
    bool x, y;
public:
    void set(bool x, bool y) { this->x = x; this->y = y; }
    virtual bool operation() = 0;
};

class ORGate : public AbstractGate {
public:
    virtual bool operation() {
        if (x || y) return true;
        else return false;
    }
};

class XORGate : public AbstractGate {
public:
    virtual bool operation() {
        if (x != y) return true;
        else return false;
    }
};

class ANDGate : public AbstractGate {
public:
    virtual bool operation() {
        if (x && y) return true;
        else return false;
    }
};

int main() {

    ANDGate andGate;
    ORGate orGate;
    XORGate xorGate;

    andGate.set(true, false);
    orGate.set(true, false);
    xorGate.set(true, false);

    cout.setf(ios::boolalpha);  // 불리언 값을 "true", "false" 문자열로 출력하도록 설정
    cout << andGate.operation() << endl; // AND 결과는 false
    cout << orGate.operation() << endl;  // OR 결과는 true
    cout << xorGate.operation() << endl; // XOR 결과는 true

    return 0;
}
