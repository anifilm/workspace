// 2+a를 위한 + 연산자 함수를 프렌드로 작성
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
    friend Power operator+(int op1, Power op2);  // 프렌드 선언
};

void Power::show() {
    cout << "kick = " << kick << ", punch = " << punch << endl;
}

// private속성인 kick, punch를 접근하도록 하기 위해 연산자 함수를 friend로 선언해야 한다.
Power operator+(int op1, Power op2) {  // + 연산자 함수를 외부 함수로 구현
    Power tmp;  // 임시 객체 생성
    tmp.kick = op1 + op2.kick;    // kick 더하기
    tmp.punch = op1 + op2.punch;  // punch 더하기
    return tmp; // 임시 객체 반환
}

int main() {

    Power a(3, 5), b;
    a.show();
    b.show();
    b = 2 + a;  // 파워 객체 더하기 연산 (operator+(2, a) 호출)
    a.show();
    b.show();

    return 0;
}
