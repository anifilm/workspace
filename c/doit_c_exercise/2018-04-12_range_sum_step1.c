// 범위에 포함된 숫자 합산하기 (C, 1)
#include <stdio.h>

int main() {

    int begin, end, sum = 0;

    printf("Begin: ");
    scanf("%d", &begin);
    printf("End: ");
    scanf("%d", &end);

    // 범위 숫자를 출력
    printf("%d", begin++);
    for ( ; begin <= end; begin++) {
        printf(", %d", begin);
        sum += begin;
    }
    printf("\n");

    printf("Sum = %d\n", sum);

    return 0;
}
