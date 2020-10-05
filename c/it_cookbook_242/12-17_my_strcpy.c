#include <stdio.h>

char* my_strcpy(char *dest, const char *src) {
    char *backup = dest;
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return backup;
}

int main() {

    char dest[30], src[10];

    printf("Enter destination string.\n");
    gets(dest);
    printf("Enter source string.\n");
    gets(src);

    printf("On strcpy(dest, src), dest became %s.\n", my_strcpy(dest, src));

    return 0;
}
