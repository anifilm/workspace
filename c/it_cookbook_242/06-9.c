#include <stdio.h>

int main() {

    char ch;

    for ( ; ; ) {
        ch = getchar();
        if (ch == EOF)
            break;
        else
            putchar(ch);
    }

    return 0;
}
