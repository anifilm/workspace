// Section 12 : 93. Accessing Pointer
#include <stdio.h>

int main() {

    int count = 10, x;
    int* int_pointer;

    int_pointer = &count;
    x = *int_pointer;

    printf("count = %d, x = %d\n", count, x);

    return 0;
}
