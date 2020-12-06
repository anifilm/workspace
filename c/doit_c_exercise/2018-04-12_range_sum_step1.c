// 범위에 포함된 숫자 합산하기 (C, 1)
#include <stdio.h>

int main() {

    int begin, end, sum = 0;

    printf("Begin: ");
    scanf("%d", &begin);
    printf("End: ");
    scanf("%d", &end);

    for ( ; begin <= end; begin++) {
        printf("%d, ", begin);
        sum += begin;
    }
    printf("\b\b \n");  // 마지막 출력에서 콤마(,) 제거

    printf("Sum = %d\n", sum);

    return 0;
}
