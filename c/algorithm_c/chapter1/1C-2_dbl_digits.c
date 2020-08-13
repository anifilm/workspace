// 2자리의 양수(10~99)를 입력합니다.
#include <stdio.h>

int main(void) {

    int n;

    printf("2자리 정수를 입력하시오.\n");

    do {
        printf("수는: ");
        scanf("%d", &n);
    } while(n < 10 || n > 99);

    printf("변수 n 값은 %d 입니다.\n", n);

    return 0;
}
