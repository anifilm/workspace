// for 반복문을 중첩 사용하여 구구단 전체를 출력하기
#include <stdio.h>

int main() {

    int step, i;

    for (step = 2; step <= 9; step++) {
        for (i = 1; i <= 9; i++) {
            printf("%d * %d = %d\n", step, i, step * i);
        }
        printf("\n");
    }

	return 0;
}
