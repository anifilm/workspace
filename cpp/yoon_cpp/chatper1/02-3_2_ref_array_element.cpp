// 참조자의 선언 가능 범위 (배열 요소)
#include <iostream>

using namespace std;

int main() {

    int arr[3] {1, 2, 3};
    int& ref1 = arr[0];
    int& ref2 = arr[1];
    int& ref3 = arr[2];

    cout << ref1 << endl;
    cout << ref2 << endl;
    cout << ref3 << endl;

    return 0;
}

/*

배열의 요소는 변수로 간주되어 참조자의 선언이 가능하다.
포인터 변수도 변수이기 때문에 참조자의 선언이 가능하다.

*/
