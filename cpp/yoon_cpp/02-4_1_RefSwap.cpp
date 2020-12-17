// 참조자를 이용한 Call-by-reference
#include <iostream>

using namespace std;

void SwapByRef2(int& ref1, int& ref2) {
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int main() {

    int val1 = 10;
    int val2 = 20;

    cout << "before swap reference" << endl;
    cout << "val1: " << val1 << endl;
    cout << "val2: " << val2 << endl;
    cout << endl;

    SwapByRef2(val1, val2);
    cout << "after swap reference" << endl;
    cout << "val1: " << val1 << endl;
    cout << "val2: " << val2 << endl;

    return 0;
}
