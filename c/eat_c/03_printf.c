// printf 형식
#include <stdio.h>

int main() {

    float a = 3.141592f;
    double b = 3.141592;
    int c = 123;

    printf("a의 값은: [%.2f]\n", a);
    printf("b의 값은: [%8.4f]\n", b);
    printf("c의 값은: [%8d]\n", c);
    printf("c의 값은: [%-8d]\n", c);

    return 0;
}
