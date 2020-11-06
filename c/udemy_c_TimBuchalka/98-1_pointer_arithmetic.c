// Section 12 : 98. Pointer Arithmetic
#include <stdio.h>

int arraySum(int array[], const int n);

int main(void) {

    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    printf("The sum is %i\n", arraySum(values, 10));

    return 0;
}

int arraySum(int array[], const int n) {
    int sum = 0, *ptr;
    ptr = array;        // ptr = &array[0];
    for (int i = 0; i < n; i++) {
        sum += ptr[i];
        printf("ptr[%d] = %2d, \tsum = %2d\n", i, ptr[i], sum);
    }
    printf("\n");

    // int *const arrayEnd = array + n;    // (array + 10)
    // for (ptr = array; ptr < arrayEnd; ptr++)
    //     sum += *ptr;

    return sum;
}
