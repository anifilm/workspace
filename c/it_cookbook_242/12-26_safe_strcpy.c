#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* safe_strcpy(char*, const char*);

int main() {

    char source[100];
    char* destination = NULL;

    printf("Enter source string.\n");
    gets(source);

    destination = safe_strcpy(destination, source);
    printf("\nAfter safe string copy, destination points to \n");
    puts(destination);

    free(destination);

    return 0;
}

char* safe_strcpy(char* dest, const char* src) {
    char* backup;
    dest = (char*)malloc(sizeof(char) * (strlen(src) + 1));
    if (dest == NULL) {
        printf("No more memory.\n");
        exit(1);
    }
    backup = dest;
    while (*dest++ = *src++);
    return backup;
}
