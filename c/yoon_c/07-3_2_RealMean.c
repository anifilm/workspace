// for문 기반의 다양한 예제
#include <stdio.h>

int main() {

    int num = 0;
    double input = 0.0;
    double total = 0.0;

    for ( ; input >= 0.0; ) {
        total += input;
        printf("실수 입력 (minus to quit): ");
        scanf("%lf", &input);
        num++;
    }
    printf("\n평균: %lf\n", total / (num - 1));

    return 0;
}
