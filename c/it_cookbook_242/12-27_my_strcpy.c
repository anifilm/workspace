#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_strcpy(char*, const char*);

int main() {

    char source[30];
    char *destination = NULL;

    printf("Enter source string.\n");
    gets(source);

    destination = my_strcpy(destination, source);
    printf("\nAfter safe string copy, destination points to \n");
    puts(destination);

    free(destination);

    return 0;
}

char* my_strcpy(char *dest, const char *src) {
    dest = (char *)malloc(sizeof(char) * (strlen(src) + 1));
    if (dest == NULL) {
        printf("No more memory.\n");
        exit(1);
    }
    memset(dest, 0, sizeof(char) * (strlen(src) + 1));
    memcpy(dest, src, sizeof(char) * (strlen(src) + 1));
    return dest;
}
