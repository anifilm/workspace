#include <stdio.h>

void main() {

    int m, n;

    for (m = 5; m < 7; m++) {
        for (n = 0; n < 3; n++) {
            printf("m(%d) = n(%d)\n", m, n);
        }
    }
}
