// 반복문과 조건문 연습 1
#include <stdio.h>

int main() {

    int i, j;

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if ((i == 0 || i == 8) && j == 4) {
                putchar('A');
            } else if ((i == 1 || i == 7) && (j == 3 || j == 5)) {
                putchar('B');
            } else if ((i == 2 || i == 6) && (j == 2 || j == 6)) {
                putchar('C');
            } else if ((i == 3 || i == 5) && (j == 1 || j == 7)) {
                putchar('D');
            } else if (i == 4 && (j == 0 || j == 8)) {
                putchar('E');
            } else {
                putchar('.');
            }
        }
        putchar('\n');
    }

	return 0;
}
