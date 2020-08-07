#include <stdio.h>

int main() {

    float num1 = 3.e5f;
    double num2 = -1.3827e-2;
    long double num3 = 5.21e9l;

    printf("float num1: %f\n", num1);         // float         -> %f
    printf("double num2: %f\n", num2);        // long          -> %f
    printf("long double num3: %Lf\n", num3);  // long double  -> %Lf

    // 지수 표기법
    printf("\n");
    printf("float num1: %e\n", num1);         // float         -> %e
    printf("double num2: %e\n", num2);        // long          -> %e
    printf("long double num3: %Le\n", num3);  // long double  -> %Le

    return 0;
}
