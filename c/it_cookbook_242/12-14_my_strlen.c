#include <stdio.h>

int my_strlen(const char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++);
    return i;
}

int main() {

    char text[30];

    printf("Enter a text.\n");
    gets(text);

    printf("Length of the text is %d\n", my_strlen(text));

    return 0;
}
