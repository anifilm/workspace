/*
Q11
다음 C 프로그램을 C++ 프로그램으로 수정하여 실행하라.
  (예문 생략...)

*/
#include <iostream>

using namespace std;

int main() {

    int n, sum = 0;

    cout << "끝 수를 입력하세요: ";
    cin >> n;

    for (int k = 1; k <= n; k++) {
        sum += k;
    }

    cout << "1에서 " << n << "까지의 합은 " << sum << "입니다." << endl;

    return 0;
}
