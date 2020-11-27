// 정수값 입력받아서 평균 내기 (C, 2)
#include <stdio.h>
#define MAX_COUNT 10

double GetAverage(int a_num[], int a_count) {
    int i, sum = 0;
    for (i = 0; i < a_count; i++)
        sum += a_num[i];
    return (double)sum / i;
}

int main() {

    int count, num[MAX_COUNT] = {0};
    double avg;

    printf("값을 입력하세요. 만약, 0을 입력하면 중단합니다.\n");
    for (count = 0; count < MAX_COUNT; count++) {
        printf("[%02d]: ", count + 1);
        scanf("%d", &num[count]);
        if (num[count] == 0) break;
    }

    if (count > 0) {
        avg = GetAverage(num, count);
        printf("입력된 값의 평균: %lf\n", avg);
    } else
        printf("사용자가 입력한 값이 없습니다.\n");

    return 0;
}
