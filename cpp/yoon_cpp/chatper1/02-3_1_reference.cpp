// 참조자 (Reference)의 이해
#include <iostream>

using namespace std;

int main() {

    int num1 = 1020;
    int& num2 = num1;

    num2 = 3047;

    cout << "Val: " << num1 << endl;
    cout << "Ref: " << num2 << endl;

    cout << "Val: " << &num1 << endl;
    cout << "Ref: " << &num2 << endl;

    return 0;
}
