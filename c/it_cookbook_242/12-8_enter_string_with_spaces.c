#include <stdio.h>

int main() {

    char str[128];

    printf("Enter a string.\n");
    scanf("%[A-Z]s", str);
    printf("String before lower case is %s\n", str);
    while (getchar() != '\n');

    printf("\nEnter a string.\n");
    scanf("%[^e]s", str);
    printf("String before e is %s\n", str);
    while (getchar() != '\n');

    printf("\nEnter a string with spaces.\n");
    scanf("%[^\n]s", str);
    printf("You enterd %s\n", str);
    while (getchar() != '\n');

    printf("\nEnter a string with spaces.\n");
    gets(str);
    printf("You enterd %s\n", str);

    return 0;
}
