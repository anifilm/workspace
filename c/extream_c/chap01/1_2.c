#include <stdio.h>

#define ADD(a, b) a + b

int main() {

    int x = 2;
    int y = 3;
    int z = ADD(x, y);

    printf("%d\n", z);

    return 0;
}
