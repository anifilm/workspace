// 재귀를 사용하지 않고 1에서 n까지의 정수를 더하는 코드
#include <stdio.h>

int sum(int n) {
    int i, sum = 0;
    for (i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int main() {

    int x;

    printf("숫자를 하나 입력하세요: ");
    scanf("%d", &x);

    printf("1에서 %d까지의 합: %d\n", x, sum(x));

    return 0;
}
