#include <stdio.h>
#include <ctype.h>
#define MAXCHAR 20

char* read_line() {
    char ch;
    int i;
    static char text[MAXCHAR];

    printf("Enter a sentence.\n");
    for (i = 0; (ch = getchar()) != '\n'; i++)
        text[i] = ch;
    text[i] = '\0';

    return text;
}

int main() {

    int i;
    char* p = read_line();

    for (i = 0; p[i] != '\0'; i++) {
        if (islower(p[i]))
            p[i] = toupper(p[i]);
        putchar(p[i]);
    }
    printf("\n");

    return 0;
}
