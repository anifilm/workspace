#include <stdio.h>

int main() {

    float num1 = 0.1f;
    double num2 = 3667.215820;
    long double num3 = 9.327513l;

    printf("float num1: %f\n", num1);         // float         -> %f
    printf("double num2: %f\n", num2);        // long          -> %f
    printf("long double num3: %Lf\n", num3);  // long double  -> %Lf

    return 0;
}
