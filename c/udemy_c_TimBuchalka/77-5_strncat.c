// Section 10 : 77. Common String Functions
#include <stdio.h>
#include <string.h>

int main() {

    char src[30], dest[30];

    strcpy(src, "This is source.");
    strcpy(dest, "This is destination. ");

    printf("%s\n", dest);
    strncat(dest, src, sizeof(src));

    printf("Final destination string: %s\n", dest);

    return 0;
}
