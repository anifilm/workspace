// Section 12 : 98. Pointer Arithmetic
// Example with pointer notation
#include <stdio.h>

int arraySum(int *array, const int n);

int main(void) {

	int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

	printf("The sum is %i\n", arraySum(values, 10));

	return 0;
}

int arraySum(int *array, const int n) {

    int sum = 0;
    int *const arrayEnd = array + n;    // (array + 10)

    for (; array < arrayEnd; array++)
        sum += *array;

    return sum;
}
