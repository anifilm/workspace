// 증감 연산자 이해하기 (++, --)
#include <iostream>

using namespace std;

int main() {

    int x = 1;

    cout << "x = " << x++ << endl;  // 1 출력 이후 증가 2
    cout << "x = " << x++ << endl;  // 2 출력 이후 증가 3
    cout << "x = " << ++x << endl;  // 4 증가 이후 4 출력
    cout << "x = " << x-- << endl;  // 4 출력 이후 감소 3
    cout << "x = " << x-- << endl;  // 3 출력 이후 감소 2
    cout << "x = " << --x << endl;  // 1 감소 이후 1 출력

    return 0;
}
