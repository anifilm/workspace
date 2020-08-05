#include <stdio.h>

void main() {

    int step, i;

    for (step = 2; step <= 9; step++) {
        for (i = 1; i <= 9; i++) {
            printf("%d * %d = %d\n", step, i, step * i);
        }
        printf("\n");
    }
}
