#include <stdio.h>

int main() {

    char str[4];

    printf("Enter a string.\n");
    scanf_s("%s", str, sizeof(str));

    printf("After scanf_s, str became %s\n\n", str);

    return 0;
}
