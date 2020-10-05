#include <stdio.h>

int main() {

    char first[6], last[6];

    printf("Enter first name.\n");
    fgets(first, sizeof(first), stdin);

    while (getchar() != '\n');      // stdin 버퍼 클리어
    printf("Enter last name.\n");
    fgets(last, sizeof(last), stdin);

    printf("\nFull name is, \n");
    puts(first);
    puts(last);

    return 0;
}
