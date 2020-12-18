/*
Q12
다음 C 프로그램을 C++ 프로그램으로 수정하여 실행하라. 이 프로그램의 실행 결과는 연습
문제 11과 같다.
  (예문 생략...)

*/
#include <iostream>

using namespace std;

int sum(int a, int b);    // 함수 원형 선언

int main() {

    int n;

    cout << "끝 수를 입력하세요: ";
    cin >> n;

    cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << "입니다." << endl;

    return 0;
}

int sum(int a, int b) {
    int sum = 0;
    for (int k = a; k <= b; k++) {
        sum += k;
    }
    return sum;
}
