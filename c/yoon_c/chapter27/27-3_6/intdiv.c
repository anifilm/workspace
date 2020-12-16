#include "stdiv.h"  // 구조체 선언 헤더 파일

Div IntDiv(int num1, int num2) {
    Div dval;
    dval.quotient = num1 / num2;
    dval.remainder = num1 % num2;
    return dval;
}
