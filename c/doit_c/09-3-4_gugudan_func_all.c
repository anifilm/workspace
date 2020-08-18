// for 반복문과 함수를 사용하여 구구단 전체 출력하기
#include <stdio.h>

void ShowMultiplication(int step) {
    int i;

    for (i = 1; i <= 9; i++) {
        printf("%d * %d = %d\n", step, i, step * i);
    }
}

int main() {

    int m;

    for (m = 2; m <= 9; m++) {
       ShowMultiplication(m);
       printf("\n");
    }

	return 0;
}
