/*
1 Power 객체 a, b에 대해 다음 연산을 위한 연산자 함수를 Power 클래스의 멤버 함수로
  선언하라.
  (1) a > 0
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
    bool operator>(int op2);  // > 연산자 함수 선언
};

void Power::show() {
    cout << "kick = " << kick << ", punch = " << punch << endl;
}

bool Power::operator>(int op2) {
    if (kick > op2 && punch > op2) return true;
    else return false;
}

int main() {

    Power a(4, 6), b(3, 5);
    a.show();
    b.show();
    if (a > 0) cout << "a의 파워가 크다." << endl;
    else cout << "a의 파워가 크지 않다." << endl;

    return 0;
}
