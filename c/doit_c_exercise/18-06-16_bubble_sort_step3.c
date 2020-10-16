// 정수값 입력받아서 내림차순으로 정렬하기
#include <stdio.h>
#define MAX_COUNT 5

int main() {

    int i = 0, num[MAX_COUNT], step, temp;

    printf("정수 %d개를 입력하세요: ", MAX_COUNT);

    // 정수 5개를 입력 받음
    while (i < MAX_COUNT) {
        if (scanf("%d", &num[i]) == 0) {
            printf("정수만 입력할 수 있습니다.\n");
            while (getchar() != '\n');
        } else
            i++;
    }

    // 버블 소트를 통해서 높은 수부터 내림차순으로 정렬
    for (step = 0; step < MAX_COUNT - 1; step++) {
        for (i = 0; i < MAX_COUNT - 1 - step; i++) {
            if (num[i] < num[i + 1]) {
                temp = num[i];
                num[i] = num[i + 1];
                num[i + 1] = temp;
            }
        }
    }

    // 결과 출력
    printf("\n정렬된 결과는 다음과 같습니다.\n");
    for (i = 0; i < MAX_COUNT; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}
