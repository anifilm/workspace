#include <stdio.h>

int main() {

    int num, max, sum = 0;

    printf("Enter an integer larger than 1: ");
    scanf("%d", &max);

    for (num = 1; num <= max; num++) {
        if (num % 2 == 0)
            continue;
        sum += num;
    }
    printf("Sum of odd numbers from 1 to %d is %d.\n", max, sum);

    return 0;
}
