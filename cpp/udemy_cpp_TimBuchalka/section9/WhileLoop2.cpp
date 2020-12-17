// Section 9
// While Loop

#include <iostream>

using namespace std;

int main() {

    int num;

    cout << "Enter a positive integer to count up to: ";
    cin >> num;

    int i = 1;
    while (num >= i) {
        cout << i << endl;
        i++;
    }

    cout << endl;
    return 0;
}
