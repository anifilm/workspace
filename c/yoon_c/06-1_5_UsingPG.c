// 실수의 출력을 위한 서식문자들: %f, %e, %g
#include <stdio.h>

int main() {

    double d1 = 1.23e-3;    // 0.00123
    double d2 = 1.23e-4;    // 0.000123
    double d3 = 1.23e-5;    // 0.0000123
    double d4 = 1.23e-6;    // 0.00000123

    printf("%g\n", d1);    // 0.00123 출력   (%f 스타일 출력)
    printf("%g\n", d2);    // 0.000123 출력  (%f 스타일 출력)
    printf("%g\n", d3);    // 1.23E-005 출력 (%e 스타일 출력)
    printf("%g\n", d4);    // 1.23E-006 출력 (%e 스타일 출력)

    return 0;
}
