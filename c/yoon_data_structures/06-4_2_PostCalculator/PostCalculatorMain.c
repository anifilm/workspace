// 후위 표기벅으로 표현된 수식을 계산하는 프로그램의 구현
#include <stdio.h>
#include "PostCalculator.h"

int main() {

    char postExp1[] = "42*8+";
    char postExp2[] = "123+*4/";

    printf("%s = %d\n", postExp1, EvalRPNExp(postExp1));
    printf("%s = %d\n", postExp2, EvalRPNExp(postExp2));

    return 0;
}
