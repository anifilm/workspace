#include <stdio.h>

char* my_strcpy(char *dest, const char *src) {
    int i = 0;
    while ((dest[i] = src[i]) != '\0')
        i++;
    return dest;
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
