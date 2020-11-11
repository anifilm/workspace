// 참조자의 선언 가능 범위 (포인터)
#include <iostream>

using namespace std;

int main() {

    int num {12};
    int* ptr = &num;
    int** dptr = &ptr;

    int &ref = num;
    int* &pref = ptr;       // int *(&pref) = ptr;
    int** &dpref = dptr;    // int **(&dpref) = dptr;

    cout << ref << endl;
    cout << *pref << endl;
    cout << **dpref << endl;

    return 0;
}
