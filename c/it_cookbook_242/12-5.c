#include <stdio.h>
#define MAX 15

int main() {

    char ch, str[MAX];
    int i;

    printf("Enter a sentence to reverse.\n");
    for (i = 0; (ch = getchar()) != '\n'; i++)
        str[i] = ch;
    str[i] = '\0';

    for (--i; i >= 0; i--)
        putchar(str[i]);

    return 0;
}
