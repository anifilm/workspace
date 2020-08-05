#include <stdio.h>

void ShowMultiplication(int step) {
    int i;

    for (i = 1; i <= 9; i++) {
        printf("%d * %d = %d\n", step, i, step * i);
    }
}

void main() {

    ShowMultiplication(5);
}
