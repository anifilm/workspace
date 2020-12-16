#include <iostream>

using namespace std;

void swap(int &number1, int &number2) {
    int temp = number1;
    number1 = number2;
    number2 = temp;
}

int main() {

    cout << "+------------------------------+" << endl;
    cout << "|         Swap Example          |" << endl;
    cout << "+------------------------------+" << endl;

    int number1 = 1;
    int number2 = 2;

    cout << "\nBefore swap: " << number1 << ", " << number2 << endl;

    swap(number1, number2);
    cout << "After swap: " << number1 << ", " << number2 << endl;

    return 0;
}
