// Section 9
// Conditional Operator

#include <iostream>

using namespace std;

int main() {

    int num{};

    cout << "Enter an integer: ";
    cin >> num;

    // if (num % 2 == 0)
    //     cout << num << " is even" << endl;
    // else
    //     cout << num << " is odd" << endl;

    cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;

    cout << endl;
    return 0;
}
