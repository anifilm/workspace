#include <stdio.h>
#include <string.h>

int main() {

    char *str1 = "pine", *str2 = "apple";

    if (strlen(str1) - strlen(str2) >= 0)
        printf("yes.\n");
    else
        printf("no.\n");

    if (strlen(str1) > strlen(str2))
        printf("yes.\n");
    else
        printf("no.\n");

    if (((int)strlen(str1) - (int)strlen(str2)) >= 0)
        printf("yes.\n");
    else
        printf("no.\n");

    return 0;
}
