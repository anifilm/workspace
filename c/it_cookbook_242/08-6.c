#include <stdio.h>

void sum_up(int n) {
    static int sum = 0;     // 정적 변수 선언
    sum += n;
    printf("Accumulated sum is: %d\n", sum);
}

int main() {

    int num, i;

    for (i = 1; i < 4; i++) {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum_up(num);
    }

    return 0;
}
