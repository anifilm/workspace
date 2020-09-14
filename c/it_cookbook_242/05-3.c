#include <stdio.h>

int main() {

    int num;

    printf("Enter an interger: ");
    scanf("%d", &num);

    if (num > 3)
        printf("num is larger than 3.\n");
    if (num > 5)
        printf("num is larger than 5.\n");

    if (num > 3)
        printf("num is larger than 3.\n");
    else if (num > 5)
        printf("num is larger than 5.\n");

    return 0;
}
