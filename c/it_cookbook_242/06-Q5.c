/* 05
입력 자연수의 약수(factors)를 모두 출력하는 프로그램을 작성하라.
  > Enter a natural number.
  > 40 ([Enter])
  > 1 2 4 5 8 10 20 40
*/
#include <stdio.h>

int main() {

    int num, i;

    printf("Enter a natural number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0)
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
