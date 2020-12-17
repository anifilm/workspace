// 반복문을 이용하여 피보나치 수열 출력하기
#include <iostream>

using namespace std;

int main() {

    int p, n, t;

    for (int i = 1; i < 10; i++) {
        p = 0;
        n = 1;
        for (int j = 1; j <= i; j++) {
            cout << n << ", ";
            t = n;
            n += p;
            p = t;
        }
        cout << endl;
    }

    return 0;
}
