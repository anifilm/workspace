// 정수값을 하나씩 입력받아 배열에 저장하기
#include <stdio.h>
#define MAX 100		// 정수값은 최대 100개 까지 저장

int main() {

    int temp, i, count = 0, num[MAX];

    while (count < MAX) {
        printf("Input Data (Exit -> 9999): ");
        scanf("%d", &temp);
        if (temp == 9999) break;
        num[count++] = temp;
    }
    printf("\n");

    // 배열 출력
    printf("[%d", num[0]);
    for (i = 1; i < count; i++)
        printf(", %d", num[i]);
    printf("]\n");

    return 0;
}
