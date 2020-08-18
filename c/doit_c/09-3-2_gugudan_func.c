// for 반복문과 함수를 사용하여 구구단 2단 출력하기
#include <stdio.h>

void ShowMultiplication() {
    int i;

    for (i = 1; i <= 9; i++) {
        printf("2 * %d = %d\n", i, 2 * i);
    }
}

int main() {

    ShowMultiplication();

	return 0;
}
