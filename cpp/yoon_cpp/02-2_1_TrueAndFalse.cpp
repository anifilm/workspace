// '참'을 의미하는 true와 '거짓'을 의미하는 false
#include <iostream>

using namespace std;

int main() {

    int i = 0, num = 10;

    cout << "true: " << true << endl;
    cout << "false: " << false << endl;
    cout << endl;

    while (true) {
        cout << i++ << ' ';
        if (i > num) break;
    }
    cout << endl << endl;

    cout << "sizeof(1): " << sizeof(1) << endl;             // int: 4 byte
    cout << "sizeof(0): " << sizeof(0) << endl;
    cout << "sizeof(true): " << sizeof(true) << endl;       // bool: 1 byte
    cout << "sizeof(false): " << sizeof(false) << endl;

    return 0;
}
