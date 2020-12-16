// #define: Function-like macro
#include <stdio.h>

#define SQUARE(X)  X * X

int main() {

    int num = 20;

    /* 정상적 결과 출력 */
    printf("Square of num: %d\n", SQUARE(num));
    printf("Square of  -5: %d\n", SQUARE(-5));
    printf("Square of 2.5: %g\n", SQUARE(2.5));

    /* 비정상적 결과 출력 */
    printf("Square of 3+2: %d\n", SQUARE(3+2));

    return 0;
}

/*

SQUARE(3+2); 에 대해 정상적인 계산 값을 출력하려면
#define SQUARE(X)  (X) * (X)    이런 형태로 수정되어야 한다.
    -> (3+2) * (3+2)

int num = 120 / SQUARE(2); 에 대해 정상적인 계산 값을 출력하려면
    -> 120 / (2) * (2)  -> 나눗셈이 먼저 계산되므로
#define SQUARE(X)  ((X) * (X))  이런 형태로 수정되어야 한다.
    -> 120 / ((2) * (2))

*/
