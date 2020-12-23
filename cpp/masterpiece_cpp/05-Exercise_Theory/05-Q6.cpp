/* 이론 문제
Q6
다음 프로그램의 실행 결과는 무엇인가?
*/
#include <iostream>

using namespace std;

void square(int n[], int size) {
    for (int i = 0; i < size; i++)
        n[i] = n[i] * n[i];
}

int main() {
    int m[3] = {1, 2, 3};
    square(m, 3);   // 함수의 매개 변수로 배열의 주소 값이 전달 된다. (call-by-address)
    for (int i = 0; i < 3; i++)
        cout << m[i] << ' ';    // 1 4 9
    cout << endl;
    return 0;
}
