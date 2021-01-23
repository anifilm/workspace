// 후위 표기법으로 표현된 수식을 계산하는 프로그램의 구현
#include <string.h>
#include <ctype.h>
#include "ListBaseStack.h"

int EvalRPNExp(char exp[]) {  // 후위 표기벅으로 표현된 수식을 계산하는 프로그램의 구현
    Stack stack;
    int expLen = strlen(exp);
    int i;
    char tok, op1, op2;

    StackInit(&stack);

    for (i = 0; i < expLen; i++) {  // 수식을 구성하는 문자 각각을 대상으로 반복
        tok = exp[i];  // 한 문자씩 tok에 저장하고,

        if (isdigit(tok)) {  // 문자의 내용이 정수인지 확인
            SPush(&stack, tok - '0');  // 정수면 숫자로 변환 후 스택에 Push
        }
        else {  // 정수가 아닌 연산자라면
            op2 = SPop(&stack);  // 스택에서 두 번째 연산자를 꺼낸다.
            op1 = SPop(&stack);  // 스택에서 첫 번째 연산자를 꺼낸다.

            switch (tok) {  // 연산하고 그 그결과를 다시 스택에 Push
                case '+':
                    SPush(&stack, op1 + op2);
                    break;
                case '-':
                    SPush(&stack, op1 - op2);
                    break;
                case '*':
                    SPush(&stack, op1 * op2);
                    break;
                case '/':
                    SPush(&stack, op1 / op2);
                    break;
            }
        }
    }

    return SPop(&stack);  // 마지막 연산 결과를 스택에서 꺼내어 반환
}
