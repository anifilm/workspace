#include <stdio.h>

int main() {

    int sum, count;

    sum = 0x01020304;

    printf("Sum is %d in decimal.\n", sum);

    printf("%d green %s are on the table.\n", 10, "apples");
    count = printf("Hello.\n");
    printf("printf returns %d.\n", count);

	return 0;
}
