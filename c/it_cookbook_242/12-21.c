#include <stdio.h>
#include <string.h>

int main() {

    int i;
    char str[40];

    printf("Enter a mixture of Korean and English.\n");
    gets(str);
    puts(str);

    for (i = 0; i < (int)strlen(str); i++)
        printf("%c", str[i]);
    printf("\n");

    // for (i = strlen(str) - 1; i >= 0 ; i--)
    //     printf("%c", str[i]);
    // printf("\n");

    for (i = (int)strlen(str) - 1; i >= 0; ) {
        if (str[i] >= 0 && str[i] <= 127) {
            printf("%c", str[i]);
            i--;
        } else {
            printf("%c", str[i - 1]);
            printf("%c", str[i]);
            i -= 2;
        }
    }
    printf("\n");

    return 0;
}
