/* 이론 문제
Q15
함수 f()r가 실행되고 난 뒤 메모리 누수가 발생하는지 판단하고 메모리 누수가 발생하면
발생하지 않도록 수정하라.
  int f() {
      int n[10] = {0};
      return n[0];
  }

*/
#include <iostream>
#include <cstring>

using namespace std;

// Answer: 메모리 누수 없음
int f() {
    int n[10] = {0};
    return n[0];
}

int main() {
    int num = f();
    cout << num << endl;
    return 0;
}
