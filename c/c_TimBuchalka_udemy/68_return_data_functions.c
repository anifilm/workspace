// Section 9: 68. Returning data from functions
#include <stdio.h>

int multiplyTwoNumbers(int x, int y) {
    int result = x * y;
    return result;
}

int main() {

    int result = 0;

    result = multiplyTwoNumbers(10, 20);
    printf("Result is %d\n", result);

	return 0;
}
