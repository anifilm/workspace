#include <stdio.h>
#include <string.h>

int main() {

    char str[] = "J.Park Seoul 010-222-3456";
    char* p = strtok(str, " ");

    while (p != NULL) {
        printf("%s\n", p);
        p = strtok(NULL, " ");
    }

    return 0;
}
