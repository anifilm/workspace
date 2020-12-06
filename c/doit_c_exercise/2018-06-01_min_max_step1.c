// 최대값과 최소값 구하기 (C, 1)
#include <stdio.h>
#define MAX_COUNT 5

int main() {

    int num_list[MAX_COUNT] = {5, 2, 6, 1, 3};
    int i, min, max;

    printf("배열 항목: ");
    min = max = num_list[0];
    for (i = 0; i < MAX_COUNT; i++) {
        printf("%d, ", num_list[i]);
        if (num_list[i] < min) min = num_list[i];
        if (num_list[i] > max) max = num_list[i];
    }
    printf("\b\b \n");  // 마지막 출력에서 콤마(,) 제거

    printf("최소값: %d, 최대값: %d\n", min, max);

    return 0;
}
