// 두 숫자의 차이를 확인하기 (fdim)
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cout << fdim(-1.0, 0.0) << endl;
    cout << fdim(1.0, 0.0) << endl;
    cout << fdim(0.0, 0.0) << endl;
    cout << fdim(5, 1) << endl;
    cout << fdim(6, 15) << endl;
    cout << fdim(4.9, 1.1) << endl;
    cout << fdim(5.9, 20.1) << endl;

    return 0;
}
