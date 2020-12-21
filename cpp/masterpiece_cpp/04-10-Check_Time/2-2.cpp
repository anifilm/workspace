/*
2 다음 중 틀린 라인을 골라 수정하라.
  (2)
*/
#include <iostream>

using namespace std;

int main() {

    char* p = new char[10];
    char *q = p;
    q[0] = 'a';
    cout << q[0] << endl;
//  delete[] q; // 동적 할당받은 배열이 아니다.
    delete[] p;

    return 0;
}
