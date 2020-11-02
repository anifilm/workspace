// word_test.c
#include <stdio.h>
#include "str.h"

int main() {

    char str1[20];
    char str2[20];

    printf("Input word 1: ");
    scanf("%s", str1);
    printf("Input word 2: ");
    scanf("%s", str2);

    if (compare(str1, str2))
        printf("%s와 %s는 같은 단어 입니다.\n", str1, str2);
    else
        printf("%s와 %s는 다른 단어 입니다.\n", str1, str2);

    return 0;
}
