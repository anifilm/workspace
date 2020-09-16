#include <stdio.h>

int main() {

    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch == 'y')
        printf("yes.\n");
    else
        printf("no.\n");

    return 0;
}
