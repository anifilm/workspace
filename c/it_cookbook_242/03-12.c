#include <stdio.h>

int main() {

    unsigned int a = 25;
    unsigned left, right;

    left = a << 3;
    right = a >> 3;

    printf("left shift: %d, right shift: %d\n", left, right);

	return 0;
}
