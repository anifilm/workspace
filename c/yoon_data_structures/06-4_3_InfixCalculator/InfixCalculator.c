#include <stdlib.h>
#include <string.h>
#include "InfixToPostfix.h"  // ConvToRPNExp 함수의 호출을 위해서
#include "PostCalculator.h"  // EvalRPNExp 함수의 호출을 위해서

int EvalInfixExp(char exp[]) {  // 중위 표기법의 수식을 계산하여 그 결과는 반환
    int len = strlen(exp);
    int ret;
    char* expcpy = (char*)malloc(len + 1);  // 문자열 저장공간 마련
    strcpy(expcpy, exp);  // exp를 expcpy에 복사

    ConvToRPNExp(expcpy);      // 후위 표기법의 수식으로 변환
    ret = EvalRPNExp(expcpy);  // 변환된 수식을 계산

    free(expcpy);  // 문자열 저장공간 해제
    return ret;  // 계산결과 반환
}
