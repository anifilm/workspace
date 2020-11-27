// 약수(Divisor) 출력하기
#include <stdio.h>

int main() {

    int i, num;

    printf("Input number: ");
    scanf("%d", &num);

    printf("Divisor: ");
    for (i = 1; i <= num; i++)
        if (num % i == 0) printf("%d, ", i);
    printf("\n");

    return 0;
}
