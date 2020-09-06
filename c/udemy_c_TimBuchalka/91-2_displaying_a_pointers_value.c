// Section 12 : 93. Accessing Pointer
#include <stdio.h>

int main() {

    int number = 0;             // A variable of type int initialized to 0
    int *p_number = NULL;       // A pointer that can point to type int

    number = 10;

    printf("number's address: %p\n", &number);      // Output the address
    printf("numbers value: %d\n", number);          // Output the value
    printf("\n");

    p_number = &number;         // Store the address of number in p_number

    printf("p_number's address: %p\n", &p_number);              // Output the address
    printf("p_number's size %d bytes\n", sizeof(p_number));     // Output the size
    printf("p_number's value: %p\n", p_number);     // Output the value (an address)
    printf("value pointed to: %d\n", *p_number);    // Value at the address

	return 0;
}
