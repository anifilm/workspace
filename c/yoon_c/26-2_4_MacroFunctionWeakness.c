// 매크로 함수의 단점
#include <stdio.h>

#define DIFF_ABS(X, Y)  ((x)>(y) ? (x)-(y) : (y)-(x))

int main(void) {

    printf("두 값의 차: %d\n", DIFF_ABS(5, 7));
    printf("두 값의 차: %g\n", DIFF_ABS(1.8, -1.4));

    return 0;
}
