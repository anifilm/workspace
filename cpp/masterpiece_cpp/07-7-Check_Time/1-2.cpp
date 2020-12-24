/*
1 Power 객체 a, b에 대해 다음 연산을 위한 연산자 함수를 Power 클래스의 멤버 함수로
  선언하라.
  (2) a & b
*/
#include <iostream>

using namespace std;

class Power {
private:
    int kick;
    int punch;
public:
    Power(int kick = 0, int punch = 0) {
        this->kick = kick; this->punch = punch;
    }
    void show();
    Power operator&(Power op2);  // & 연산자 함수 선언
};

void Power::show() {
    cout << "kick = " << kick << ", punch = " << punch << endl;
}

Power Power::operator&(Power op2) {
    Power tmp;
    tmp.kick = this->kick & op2.kick;
    tmp.punch = this->punch & op2.punch;
    return tmp;
}

int main() {

    Power a(3, 5), b(4, 6), c;
    c = a & b;
    a.show();
    b.show();
    c.show();

    return 0;
}
