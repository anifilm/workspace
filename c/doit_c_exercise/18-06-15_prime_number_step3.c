// 1 ~ 100 사이에 존재하는 소수 출력하기
#include <stdio.h>
#define MAX_NUM 100

int IsPrime(int a_num) {
    int i;
    for (i = 2; i < a_num; i++)
        if (a_num % i == 0) return 0;
    return 1;
}

int main() {

    int num;

    while (1) {
        printf("정수값을 입력하세요 (1이하의 값을 입력하면 종료): ");
        scanf("%d", &num);

        if (num > 1) {
            if (IsPrime(num) == 1)
                printf("%d은 소수입니다.\n", num);
            else
                printf("%d는 소수가 아닙니다.\n", num);
        } else
            break;
        printf("\n");
    }
    printf("\n");

    return 0;
}
