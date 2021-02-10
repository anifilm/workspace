// 최대값과 최소값 구하기 (C, 2)
#include <stdio.h>
#define MAX_COUNT 30

int main() {

    int num_list[MAX_COUNT], temp;
    int i, count = 0, min, max;

    printf("입력을 끝내려면 0을 입력하세요!\n\n");

    while (count < MAX_COUNT) {
        printf("%d번째 값을 입력하세요: ", count + 1);
        scanf("%d", &temp);
        if (temp == 0) break;
        num_list[count] = temp;
        count++;
    }

    // 입력한 정수 출력, 최대값과 최소값 저장
    min = max = num_list[0];
    printf("\n입력한 정수 목록: %d", num_list[0]);
    for (i = 1; i < count; i++) {
        printf(", %d", num_list[i]);
        if (num_list[i] < min) min = num_list[i];
        if (num_list[i] > max) max = num_list[i];
    }
    printf("\n");

    printf("최소값: %d, 최대값: %d\n", min, max);

    return 0;
}
