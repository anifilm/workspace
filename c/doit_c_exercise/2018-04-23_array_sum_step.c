// 가변 길이 배열
#include <stdio.h>

int main() {

    int count, i, sum = 0;

    printf("몇 개의 정수를 입력 하시겠습니까? ");
    scanf("%d", &count);

    int num[count];

    for (i = 0; i < count; i++) {
        printf("%d번째 정수 입력: ", i + 1);
        scanf("%d", &num[i]);
    }

    // 입력된 값을 연속으로 출력
    printf("\n입력된 값 확인: %d", num[0]);
    for (i = 1; i < count; i++) {
        printf(", %d", num[i]);
    }
    printf("\n");

    printf("\n입력된 값을 모두 합산 합니다.\n");
    for (i = 0; i < count; i++) {
        printf("%d", num[i]);
        sum += num[i];
        if (i < count - 1)
            printf(" + ");
        else
            printf(" = ");
    }
    printf("%d\n", sum);

    return 0;
}
