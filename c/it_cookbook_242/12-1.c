#include <stdio.h>

int main() {

    char *p = "apple";
    char str[20];
    int i;

    printf("*p is %c\n", *p);
    printf("Last character of apple is %c\n", *("apple" + 4));

    printf("\nEnter a string.\n");
    scanf("%s", str);

    printf("%s\n", str);

    for (i = 0 ; str[i] != '\0'; i++)
        printf("%c", str[i]);
    printf("\n");

    return 0;
}
