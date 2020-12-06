// 범위에 포함된 숫자 합산하기 (C, 2)
#include <stdio.h>

int main() {

    int begin, end, odd_sum = 0, even_sum = 0, total_sum = 0;

    printf("Begin: ");
    scanf("%d", &begin);
    printf("End: ");
    scanf("%d", &end);

    printf("%d ~ %d: ", begin, end);
    for ( ; begin <= end; begin++) {
        printf("%d, ", begin);
        if (begin % 2 == 1)
            odd_sum += begin;
        else
            even_sum += begin;
        total_sum += begin;
    }
    printf("\b\b \n");  // 마지막 출력에서 콤마(,) 제거

    printf("\nOdd Sum = %d, Even Sum = %d\n", odd_sum, even_sum);

    printf("Total Sum = %d\n", total_sum);

    return 0;
}
