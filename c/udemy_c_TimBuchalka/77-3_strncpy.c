// Section 10 : 77. Common String Functions
#include <stdio.h>
#include <string.h>

int main() {

    char src[40];
    char dest[12];

    memset(dest, '\0', sizeof(dest));
    strcpy(src, "Hello, how are you doing.");
    strncpy(dest, src, 10);

    printf("%s\n", src);
    printf("%s\n", dest);

    return 0;
}
