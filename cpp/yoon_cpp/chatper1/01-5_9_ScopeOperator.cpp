// 범위 지정 연산 (Scope Resolution Operator)의 또 다른 기능
#include <iostream>

using namespace std;

int val {100};          // 전역변수

int SimpleFunc1() {
    int val {10};       // 지역변수
    return val += 3;    // 지역변수 val의 값 3증가
}

int SimpleFunc2() {
    return ::val += 7;  // 전역변수 val의 값 7증가
}

int main() {

    cout << SimpleFunc1() << endl;
    cout << SimpleFunc2() << endl;

    return 0;
}
