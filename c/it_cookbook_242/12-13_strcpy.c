#include <stdio.h>
#include <string.h>

int main() {

    char str1[30], str2[10];

    printf("Enter the first string.\n");
    gets(str1);
    printf("Enter the second string.\n");
    gets(str2);

    printf("strlen(str1) is %d\n", strlen(str1));
    printf("strlen(str2) is %d\n", strlen(str2));

    if (strcmp(str1, str2) == 0)
        printf("%s and %s are equl.\n", str1, str2);
    else if (strcmp(str1, str2) < 0)
        printf("%s is smaller than %s.\n", str1, str2);
    else
        printf("%s is bigger than %s.\n", str1, str2);

    printf("Before strcpy, str1 = %s, str2 = %s.\n", str1, str2);
    strcpy(str1, str2);
    printf("After strcpy, str1 = %s, str2 = %s.\n", str1, str2);

    printf("Before strcat, str1 = %s, str2 = %s.\n", str1, str2);
    strcat(str1, str2);
    printf("After strcat, str1 = %s, str2 = %s.\n", str1, str2);

    printf("%s.\n", strcat(str1, "OMG!"));

    return 0;
}
