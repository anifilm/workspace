/*
2 다음 중 틀린 라인을 골라 수정하라.
  (1)
*/
#include <iostream>

using namespace std;

int main() {

    int* p = new int(3);
    int n = *p;
    cout << n << endl;
//  delete[] p; // 동적 배열이 아니다.
    delete p;

    return 0;
}
