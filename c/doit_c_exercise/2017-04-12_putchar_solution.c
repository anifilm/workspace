// 반복문과 조건문 연습 1
#include <stdio.h>

#define LINE_COUNT 9
#define WIDTH_LENGTH 9
#define MIDDLE_POS 5

int main() {

    int i, j, step = 0;

    for (i = 0; i < LINE_COUNT; i++) {
        for (j = 1; j <= WIDTH_LENGTH; j++) {
            if (j == (MIDDLE_POS - step) || j == (MIDDLE_POS + step)) {
                putchar('A' + step);
            } else {
                putchar('.');
            }
        }

        if (i >= LINE_COUNT / 2)
            step--;
        else
            step++;

        putchar('\n');
    }

	return 0;
}
