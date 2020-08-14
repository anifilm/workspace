#include <stdio.h>

int main() {

    int sum = 0, num;

    for (num = 1; num <= 5; num++) {
        printf("num(%d) + sum(%d) = ", num, sum);
        sum = sum + num;
        printf("%d\n", sum);
    }

    printf("\nResult: num = %d, sum = %d\n", num, sum);
	
	return 0;
}
