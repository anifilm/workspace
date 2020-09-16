// 08 9 + 99 + 999 + 9999 ...의 합계를 계산하는 프로그램을 작성하라.
// 힌트 99 = 9 * 10 + 9, 999 = 99 * 10 + 9
// 즉, 루프를 돌 때마다 이전 수에 10을 곱하고 거기에 9를 더한다.
// > Enter the number of terms:
// > 5 ([Enter])
// > The sum is 111105
#include <stdio.h>

int main() {

    int num, i, re, sum;
    re = 9;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        sum += re;
        re = re * 10 + 9;
    }

    printf("The sum is %d\n", sum);

    return 0;
}
