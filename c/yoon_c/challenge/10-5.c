/* 도전! 프로그래밍 1
도전 5
10개의 소수(Prime Number)를 출력하는 프로그램을 작성해 보자. 참고로 정수 num이 1과
num으로 밖에 나눠지지 않는다면 이는 소수에 해당한다. 따라서 3은 소수이다. 그러나
4는 소수가 아니다. 1, 2, 4로 나눠지기 때문이다.

[실행의 예]
2 3 5 7 11 13 17 19 23 29
*/
#include <stdio.h>

int IsPrime(int n) {
    int i, divisors = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) divisors++;
    }
    if (divisors == 2) return 1;

    return 0;
}

int main() {

    int i = 2, cnt = 0;

    while (cnt != 10) {
        if (IsPrime(i) == 1) {
            printf("%d ", i);
            cnt++;
        }
        i++;
    }

    return 0;
}
