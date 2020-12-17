// Section 9
// While Loop

#include <iostream>

using namespace std;

int main() {

    int number;

    cout << "Enter an integer less than 100: ";
    cin >> number;

    while (number >= 100) {
        cout << "\nEnter an integer less than 100: ";
        cin >> number;
    }
    cout << "Thanks" << endl;

    cout << endl;
    return 0;
}
