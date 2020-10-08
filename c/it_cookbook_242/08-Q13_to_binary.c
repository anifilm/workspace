// 13 10진수를 2진수로 변환하는 프로그램을 작성하되 재귀 호출에 의해 구현하라.
// void to_binary(int n);
#include <stdio.h>

void to_binary(int n) {
    if (n == 0)
        return;
    else {
        to_binary(n / 2);
        printf("%d", (n % 2));
    }
}

int main() {

    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    to_binary(num);
    printf("\n");

    return 0;
}
