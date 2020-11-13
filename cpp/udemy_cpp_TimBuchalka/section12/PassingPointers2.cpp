// Section 12
// Passing Pointers

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int x {100}, y {200};
    cout << "Before swap" << endl;
    cout << "x: " << x << "  y: " << y << endl;

    swap(&x, &y);

    cout << "\nAfter swap" << endl;
    cout << "x: " << x << "  y: " << y << endl;

    cout << endl;
    return 0;
}
