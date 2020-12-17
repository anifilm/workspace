// Section 11
// Math examples

#include <iostream>
#include <cmath>        // required

using namespace std;

int main() {

    double num;

    cout << "Enter a number (double): ";
    cin >> num;

    cout << "The sqrt of " << num << " is: " << sqrt(num) << endl;                              // 제곱근 (square root)
    cout << "The cubed root of " << num << " is: " << cbrt(num) << endl;                        // 세제곱근 (cube root)

    cout << "The sine of " << num << " is: " << sin(num) << endl;
    cout << "The cosine of " << num << " is: " << cos(num) << endl;

    cout << "The ceil of " << num << " is: " << ceil(num) << endl;
    cout << "The floor of " << num << " is: " << floor(num) << endl;
    cout << "The round of " << num << " is: " << round(num) << endl;

    double power;
    cout << "\nEnter a power to rise " << num << " to: ";
    cin >> power;
    cout << num << " raised to the " << power << " power is: " << pow(num, power) << endl;      // 제곱 (power)

    cout << endl;
    return 0;
}
