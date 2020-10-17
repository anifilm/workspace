// 정수값 입력받아서 평균 내기 (C, 1)
#include <stdio.h>
#define MAX_COUNT 10

int main() {

    int count, num, sum = 0;
    double avg;

    printf("값을 입력하세요. 만약, 0을 입력하면 중단합니다.\n");
    for (count = 0; count <= MAX_COUNT; count++) {
        printf("[%02d]: ", count + 1);
        scanf("%d", &num);
        if (num == 0) break;
        sum += num;
    }

    if (count > 0) {
        avg = (double)sum / (count);
        printf("입력된 값의 평균: %lf\n", avg);
    } else
        printf("사용자가 입력한 값이 없습니다.\n");

    return 0;
}
