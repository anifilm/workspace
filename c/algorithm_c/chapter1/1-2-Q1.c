// Q1 네 값의 최대값을 구한는 함수 max4를 작성하시오.
#include <stdio.h>

// a, b, c, d의 최대값을 구합니다.
int max4(int a, int b, int c, int d) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    return max;
}

int main(void) {

    printf("max(%d, %d, %d, %d) = %d\n", 3, 2, 1, 4, max4(3, 2, 1, 4));
    printf("max(%d, %d, %d, %d) = %d\n", 3, 2, 2, 1, max4(3, 2, 2, 1));
    printf("max(%d, %d, %d, %d) = %d\n", 3, 4, 2, 1, max4(3, 4, 2, 1));

    return 0;
}
