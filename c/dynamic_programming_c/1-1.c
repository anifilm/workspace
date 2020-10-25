// 1에서 n까지 정수의 합을 구하는 함수
#include <stdio.h>

int sum(int n) {
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}

int main() {

    int x;

    printf("숫자를 하나 입력하세요: ");
    scanf("%d", &x);

    printf("1에서 %d까지의 합: %d\n", x, sum(x));

    return 0;
}
