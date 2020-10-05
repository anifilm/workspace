#include <stdio.h>
#include <string.h>

int main() {

    char *str1 = "Okey Buddy";
    char str2[15] = "Bless you.";

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    printf("strlen(str1) is %d\n", strlen(str1));
    printf("strlen(str2) is %d\n", strlen(str2));

    printf("sizeof(str1) is %d\n", sizeof(str1));       // sizeof pointer
    printf("sizeof(str2) is %d\n", sizeof(str2));       // sizeof array length

    return 0;
}
