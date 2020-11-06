#include <stdio.h>

int main() {

    char str1[10] = "apple";
    char* str2 = "apple";

    str1[4] = 'y';
    printf("%s", str1);
    printf("\n");

    str2 = "pie";
    printf("%s", str2);
    printf("\n");

    return 0;
}
