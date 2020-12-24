// a+b를 위한 + 연산자 함수를 프렌드로 작성
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
    friend Power operator+(Power op1, Power op2);  // 프렌드 선언
};

void Power::show() {
    cout << "kick = " << kick << ", punch = " << punch << endl;
}

Power operator+(Power op1, Power op2) {  // + 연산자 함수를 외부 함수로 구현
    Power tmp;  // 임시 객체 생성
    tmp.kick = op1.kick + op2.kick;     // kick 더하기
    tmp.punch = op1.punch + op2.punch;  // punch 더하기
    return tmp; // 임시 객체 반환
}

int main() {

    Power a(3, 5), b(4, 6), c;
    c = a + b;  // 파워 객체 더하기 연산 (operator+(a, b) 호출)
    a.show();
    b.show();
    c.show();

    return 0;
}
