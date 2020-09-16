#include <stdio.h>

int main() {

    char ch;

    printf("Enter a character: ");

    for (ch = getchar(); ch != EOF; ch = getchar()) {
        if (ch >= 'a' && ch <= 'z')
            ch -= 'a' - 'A';
        putchar(ch);
        putchar('\n');
        getchar();
        printf("Enter a character: ");
    }

    return 0;
}
