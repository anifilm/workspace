// 범위에 포함된 숫자 합산하기 (C, 3)
#include <stdio.h>

int main() {

    int begin, end, sum = 0;

    while (1) {

        printf("시작 값: ");
        scanf("%d", &begin);
        printf("끝 값: ");
        scanf("%d", &end);

        if (begin == end) {
            printf("\n시작과 끝이 동일해서 작업을 종료합니다.\n");
            break;
        }

        // 범위 숫자를 출력
        printf("%d", begin++);
        for ( ; begin <= end; begin++) {
            printf(", %d", begin);
            sum += begin;
        }
        printf("\n");

        printf("Sum = %d\n\n", sum);
    }
    return 0;
}
