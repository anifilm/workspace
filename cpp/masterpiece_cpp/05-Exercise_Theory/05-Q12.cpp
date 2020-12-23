/* 이론 문제
Q12
비슷하게 생긴 다음 두 함수가 있다.

다음 코드를 실행하였을 때, x, y의 값이 어떻게 변하는지 예측하고, 그 이유를 설명하라.
*/
#include <iostream>

using namespace std;

int& big1(int a, int b) {
    if (a > b) return a;
    else return b;
}

int& big2(int& a, int& b) {
    if (a > b) return a;
    else return b;
}

int main() {
    int x = 1, y = 2;
    int& z = big1(x, y);    // 두 수중 큰 값인 y의 값을 z의 참조로 전달하려 하지만 함수 종료시 변수의 값 소멸로 오류 발생
    z = 100;
    cout << z <<' ' <<y << endl;
    int& w = big2(x, y);    // 두 수중 큰 값인 y 변수를 w의 참조로 전달 w = y
    w = 100;                // y = 100
    return 0;
}
