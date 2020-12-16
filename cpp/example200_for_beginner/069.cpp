// 포인터 이해하기 (*)
#include <iostream>

using namespace std;

int main() {

    int number1 = 10;
    int* pointer1 = &number1;

    double number2 = 23.4;
    double* pointer2 = &number2;

    cout << "number1: " << number1 << ", sizeof(int number1): " << sizeof(number1) << endl;
    cout << "pointer1: " << pointer1 << ", sizeof(int pointer1): " << sizeof(pointer1) << endl;
    cout << endl;

    cout << "number2: " << number2 << ", sizeof(double number2): " << sizeof(number2) << endl;
    cout << "pointer2: " << pointer2 << ", sizeof(double pointer2): " << sizeof(pointer2) << endl;

    return 0;
}
