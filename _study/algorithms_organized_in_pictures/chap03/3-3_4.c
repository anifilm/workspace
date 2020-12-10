// 원소가 10개인 배열을 만들고, 점수를 입력받아 평균을 구하는 알고리즘
#include <stdio.h>

int main() {

    int student[10], i, total = 0, average;

    printf("점수를 입력\n");
    for (i = 0; i < 10; i++) {
        printf("student[%d]: ", i);
        scanf("%d", &student[i]);
        total += student[i];
    }
    average = total / 10;

    printf("합계: %d\n", total);
    printf("평균: %d\n", average);

    return 0;
}
