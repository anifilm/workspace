// Section 12 : 103. Pass by reference
#include <stdio.h>

// fuction definition to swap the values
void swap(int *x, int *y) {

    int temp;

    temp = *x;  // save the value of x
    *x = *y;    // put y into x
    *y = temp;  // put temp into y
}

int main() {

    // local variable definition
    int a = 100;
    int b = 200;

    printf("Before swap, value of a: %d\n", a);
    printf("Before swap, value of b: %d\n", b);

    // calling a function to swap the values
    swap(&a, &b);

    printf("\nAfter swap, value of a: %d\n", a);
    printf("After swap, value of b: %d\n", b);

    return 0;
}
