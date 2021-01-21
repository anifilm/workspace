// 중위 표기법을 후위 표기법으로 바꾸는 프로그램의 구현
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ListBaseStack.h"

int GetOpPrec(char op) {  // 연산자의 연산 우선순위 정보를 반환
    switch (op) {
        case '*':
        case '/':
            return 5;  // 가장 높은 연산의 우선순위
        case '+':
        case '-':
            return 3;  // 5보다 작고 1보다 높은 연산의 우선순위
        case '(':
            return 1;  // 가장 낮은 연산의 우선순위
    }
    return -1;  // 등록되지 않은 연산자임을 알림
}

int WhoPrecOp(char op1, char op2) {
    int op1Prec = GetOpPrec(op1);
    int op2Prec = GetOpPrec(op2);

    if (op1Prec > op2Prec)      // op1의 우선순의가 더 높다면
        return 1;
    else if(op1Prec < op2Prec)  // op2의 우선순위가 더 높다면
        return -1;
    else                        // op1과 op2의 우선순위가 같다면
        return 0;
}

void ConvToRPNExp(char exp[]) {  // 후위 표기법의 수식으로 변환
    Stack stack;
    int expLen = strlen(exp);
    char* convExp = (char*)malloc(expLen + 1);  // 변환된 수식을 담을 공간 마련

    int i, idx = 0;
    char tok, popOp;

    memset(convExp, 0, sizeof(char) * expLen + 1);  // 할당된 배열을 0으로 초기화
    StackInit(&stack);

    for (i = 0; i < expLen; i++) {
        tok = exp[i];  // exp로 전달된 수식을 한 문자씩 tok에 저장

        if (isdigit(tok)) {  // tok에 저장된 문자가 숫자인지 확인
            convExp[idx++] = tok;  // 숫자이면 배열 convExp에 그냥 저장
        }
        else {  // 숫자가 아니라면 (연산자라면)
            switch(tok) {
                case '(':  // 여는 소괄호라면,
                    SPush(&stack, tok);  // 스택에 쌓는다.
                    break;
                case ')':  // 닫는 소괄호라면,
                    while (1) {
                        popOp = SPop(&stack);  // 스택에서 연산자를 꺼내어,
                        if (popOp == '(')      // 연산자 '('를 만날 때 까지,
                            break;
                        convExp[idx++] = popOp;  // 배열 convExp에 저장한다.
                    }
                    break;
                case '+': case '-':
                case '*': case '/':
                    while (!SIsEmpty(&stack) && WhoPrecOp(SPeek(&stack), tok) >= 0)
                        convExp[idx++] = SPop(&stack);
                    SPush(&stack, tok);
                    break;
            }
        }
    }

    while (!SIsEmpty(&stack))  // 스택에 남아 있는 모든 연산자를,
        convExp[idx++] = SPop(&stack);  // 배열 convExp로 이동한다.

    strcpy(exp, convExp);  // 변환된 수식을 exp에 복사하고,
    free(convExp);  // convExp는 소멸시킨다.
}
