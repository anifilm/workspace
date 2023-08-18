// Section 10 : 77. Common String Functions
#include <stdio.h>
#include <string.h>

int main() {

    char s[10];         // declare
    // s = "Hello";     // initalize - DOESN'T WORK ('l-value required' error)

    char src[50], dest[50];

    strcpy(src, "This is source.");
    strcpy(dest, "This is destination.");

    printf("%s\n", src);
    printf("%s\n", dest);

    return 0;
}
