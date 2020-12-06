// 약수(Divisor) 출력하기
#include <stdio.h>

int main() {

    int i, num;

    printf("Input number: ");
    scanf("%d", &num);

    printf("Divisor: ");
    for (i = 1; i <= num; i++)
        if (num % i == 0) printf("%d, ", i);
    printf("\b\b \n");  // 마지막 출력에서 콤마(,) 제거

    return 0;
}
