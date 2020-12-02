// 실수의 표현방식 (부동 소수점 오차)
#include <stdio.h>

int main() {

    int i;
    float num = 0.0;

    for (i = 0; i < 1000; i++)
        num += 0.1;

    printf("0.1을 1000번 더한 결과: %f\n", num);

    return 0;
}
