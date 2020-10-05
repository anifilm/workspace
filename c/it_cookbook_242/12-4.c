#include <stdio.h>

char* get_apple() {
    char *p = "apple";
    return p;
}

int main() {

    char *str = get_apple();
    printf("%s", str);

    return 0;
}
