// 숫자를 문자열로 변환하기 (to_string)
#include <iostream>

using namespace std;

int main() {

    int number1 = 10;
    double number2 = 67.8;

    string no_str1 = to_string(number1);
    string no_str2 = to_string(number2);

    cout << "to_string(number1): " << no_str1 << endl;
    cout << "to_string(number2): " << no_str2 << endl;

    return 0;
}
