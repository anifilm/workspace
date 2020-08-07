#include <stdio.h>

int main() {

    float num1;
    float num2;

    num1 = 1.0f + 0.456789f;        // 1.0에 0.456789를 더해서 num1에 대입
    num2 = 1.0f - 0.456789f;        // 1.0에서 0.456789를 빼서 num2에 대입

    printf("num1: %f\n", num1);     // 1.456789
    printf("num2: %f\n", num2);     // 0.543211

    return 0;
}
