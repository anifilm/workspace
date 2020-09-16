#include <stdio.h>

int main() {

    int num, i, j, k;

    printf("Enter an integer between 2 and 19: ");
    scanf("%d", &num);

    for (i = 1; i <= 6; i++) {
        for (j = 1; j <= 6; j++) {
            for (k = 1; k <= 6; k++) {
                if (i + j + k == num)
                    printf("Sum of %d, %d, %d is %d\n", i, j, k, num);
            }
        }
    }

    return 0;
}
