// 참조자의 선언 가능 범위 (포인터)
#include <iostream>

using namespace std;

int main() {

    int num {12};
    int* ptr = &num;
    int** dptr = &ptr;

    int& ref = num;
    int *(&pref) = ptr;
    int **(&dpref) = dptr;

    cout << ref << endl;
    cout << *pref << endl;
    cout << **dpref << endl;

    return 0;
}

/*

배열의 요소는 변수로 간주되어 참조자의 선언이 가능하다.
포인터 변수도 변수이기 때문에 참조자의 선언이 가능하다.

*/
