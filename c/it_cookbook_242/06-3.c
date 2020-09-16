#include <stdio.h>

int main() {

    int sum, count;

    for (sum = 0, count = 1; count <= 10; )
        sum += count++;

    printf("Sum of 1 to 10 is %d\n", sum);

	return 0;
}
