// Section 12 : 107. malloc, calloc, and realloc
#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main() {

    char *str;

    // Initial memory allocation
    str = (char *)malloc(15);
    strcpy(str, "Jason");
    printf("String = %s, \tAddress = %p\n", str, str);

    // Reallocating memory
    str = (char *)realloc(str, 25);
    strcat(str, ".com");
    printf("String = %s, Address = %p\n", str, str);

    free(str);

    return 0;
}
