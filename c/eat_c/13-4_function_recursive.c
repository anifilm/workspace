#include <stdio.h>

int recursive(int n) {
    printf("난 인자가 %d 에요!\n", n);
    if (n <= 0) return 0;

    recursive(n - 1);

    return 0;
}

int main() {

    recursive(3);

    return 0;
}
