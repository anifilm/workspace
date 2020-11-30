// 실수가 0이 아닌지 확인하기 (isnormal)
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double number1 {1};
    double number2 {0.4};
    double number3 {0.0};
    double number4 {11.2};

    cout << boolalpha;
    cout << isnormal(number1) << endl;
    cout << isnormal(number2) << endl;
    cout << isnormal(number3) << endl;
    cout << isnormal(number4) << endl;

    return 0;
}
