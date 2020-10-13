#include <stdio.h>

void add(int a, int b) {
    printf("The result is %d\n", a + b);
}

void subtract(int a, int b) {
    printf("The result is %d\n", a - b);
}

void multiply(int a, int b) {
    printf("The result is %d", a * b);
}

void divide(int a, int b) {
    printf("The result is %d\n", a / b);
}

int main() {

    int first, second, i;
    void(*fp[4])(int, int) = {add, subtract, multiply, divide};

    printf("Enter two integers.\n");
    scanf("%d %d", &first, &second);
    printf("Enter 1(add), 2(subtract), 3(multiply), 4(divide)\n");
    scanf("%d", &i);

    (fp[i - 1])(first, second);

    return 0;
}
