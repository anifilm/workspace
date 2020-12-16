// 명시적 변환 이해하기 ( () )
#include <iostream>

using namespace std;

int main() {

    int number1 = 65;
    double number2 = 23.4;

    int number3 = int(number2);
    double number4 = double(number1 / number2);

    char ch = char(number1);

    cout << "number1: " << number1 << endl;     // 65
    cout << "number2: " << number2 << endl;     // 23.4
    cout << "number3: " << number3 << endl;     // 23
    cout << "number4: " << number4 << endl;     // 2.77778
    cout << "ch: " << ch << endl;               // A

    return 0;
}
