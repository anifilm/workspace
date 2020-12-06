// 동적 메모리 할당
#include <stdio.h>
#include <stdlib.h>

int main() {

    int count, i, sum = 0;
    int* p;

    printf("몇 개의 정수를 입력 하시겠습니까?: ");
    scanf("%d", &count);

    if (count > 0) {
        p = (int*)malloc(sizeof(int) * count);
        if (p != NULL) {
            for (i = 0; i < count; i++) {
                printf("%d번째 정수 입력: ", i + 1);
                scanf("%d", p + i);
            }

            printf("\n입력된 값 확인: ");
            for (i = 0; i < count; i++) {
                printf("%d, ", *(p + i));
            }
            printf("\b\b \n");  // 마지막 출력에서 콤마(,) 제거

            printf("\n입력된 값을 모두 합산 합니다.\n");
            for (i = 0; i < count; i++) {
                printf("%d", *(p + i));
                sum += *(p + i);
                if (i < count - 1)
                    printf(" + ");
                else
                    printf(" = ");
            }
            printf("%d\n", sum);
        }
        free(p);
    }
    return 0;
}
