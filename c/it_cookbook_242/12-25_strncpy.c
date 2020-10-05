#include <stdio.h>
#include <string.h>

int main() {

    char dest[9];
    char *src = "mju.ac.kr";
    char str[9];

    strncpy(dest, src, sizeof(dest));
    printf("%s\n", strcpy(str, dest));

    return 0;
}
