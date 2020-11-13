// Section 9
// Conditional Operator

#include <iostream>

using namespace std;

int main() {

    int num1 {}, num2 {};

    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;

    if (num1 != num2) {
        cout << "\nLargerst: " << ((num1 > num2) ? num1 : num2) << endl;
        cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
    } else {
        cout << "\nThe numbers are the same" << endl;
    }

    cout << endl;
    return 0;
}
