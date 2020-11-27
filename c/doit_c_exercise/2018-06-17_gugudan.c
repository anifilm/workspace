// 구구단 출력하기 (C, 1)
#include <stdio.h>

int main() {

    int i, step;

    for (step = 2; step <= 9; step++) {
        for (i = 1; i <= 9; i++) {
            printf("%d * %d = %d\n", step, i, step * i);
        }
        printf("\n");
    }

    return 0;
}
