#include <stdio.h>
#include <string.h>

int main() {

    char text[10];

    printf("Enter a text.\n");
    fgets(text, sizeof(text), stdin);
    printf("you entered %s.", text);
    printf(" It's length is %d.\n", strlen(text));

    text[strlen(text) - 1] = '\0';
    printf("You entered %s.", text);
    printf(" It's length is %d.\n", strlen(text));

    return 0;
}

/*

    gets는 '\n'을 '\0'으로 대체
    fgets는 '\n'을 유지한채 '\0'을 추가

*/
