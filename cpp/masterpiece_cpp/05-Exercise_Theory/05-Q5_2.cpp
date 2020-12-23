/* 이론 문제
Q5
다음 프로그램의 실행 결과는 무엇인가?
  (2)
*/
#include <iostream>

using namespace std;

void square(int& n) {
    n = n * n;
}

int main() {
    int m = 5;
    square(m);
    cout << m << endl;  // 25
    return 0;
}
