#include <stdio.h>

int main() {

    int num1 = 32;
    int num2 = 7;
    float num3;

    num3 = num1 / num2;
    printf("ex1: %f\n", num3);

    num3 = (float)num1 / num2;      // num1을 float으로 형변환
    printf("ex2: %f\n", num3);

    return 0;
}
