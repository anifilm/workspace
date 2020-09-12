#include <stdio.h>

int main() {

    int a = 105, b = 32;

    printf("105 modulo 32 is %d\n", a % b);
    printf("105 bitwise AND 31 is %d\n", a & (b - 1));

	return 0;
}
