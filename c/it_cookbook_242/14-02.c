#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    int ch;
    unsigned int num = 0;

    FILE* fp = fopen("14-02_from.txt", "rt");
    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    ch = fgetc(fp);
    while (isdigit(ch)) {
        num = num * 10 + ch - '0';
        ch = fgetc(fp);
    }
    printf("Number is %d\n", num);

    ungetc(ch, fp);
    printf("String is ");
    while ((ch = fgetc(fp)) != EOF)
        printf("%c", ch);
    printf("\n");

    return 0;
}
