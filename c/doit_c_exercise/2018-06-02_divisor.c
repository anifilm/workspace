// 약수(Divisor) 출력하기
#include <stdio.h>

int main() {

    int i, num;

    printf("Input number: ");
    scanf("%d", &num);

    // 약수를 연속으로 출력
    printf("Divisor: 1");
    for (i = 2; i <= num; i++)
        if (num % i == 0) printf(", %d", i);
    printf("\n");

    return 0;
}
