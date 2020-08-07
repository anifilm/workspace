#include <stdio.h>
#include <float.h>      // 실수 자료형의 양수 최소값, 최대값이 정의된 헤더 파일

int main() {

    float num1 = FLT_MIN;           // float의 양수 최소값
    float num2 = FLT_MAX;           // float의 양수 최대값
    double num3 = DBL_MIN;          // double의 양수 최소값
    double num4 = DBL_MAX;          // double의 양수 최대값
    long double num5 = LDBL_MIN;    // long double의 양수 최소값
    long double num6 = LDBL_MAX;    // long double의 양수 최대값

    printf("float       min: %e   -> max: %e\n", num1, num2);           // 0.0000000000000000000000000000000000000118
                                                                // 340282346638528859811704183484516925440.00
    printf("double      min: %e  -> max: %e\n", num3, num4);          // 2.225074e-308 1.797693e+308
    printf("long double min: %Le -> max: %Le\n", num5, num6);   // 2.225074e-308 1.797693e+308

    return 0;
}
