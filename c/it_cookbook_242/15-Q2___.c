// 02 "5 + 7"처럼 연산자(Operator)가 피연산자(Operand)의 가운데에 들어가는 연산식을 중위
// 표현(Infix Notation)이라 부른다. 이에 비해, "5 7 +"처럼 연산자가 뒤로 가는 표현을 후위
// 표현(Postfix Notation)이라고 한다(폴란드의 논리학자에 의해 개발되었기 때문에 후위 표현
// 을 Reverse Polish Notation이라고도 한다). 프로그래머가 수식을 표현할 때는 중위 표현을
// 사용하지만 이는 컴파일러에 의해 후위 표현으로 바뀌어 실행된다.

// "(2 + 5) * 3 - 1"이라는 중위 표현은 컴파일러에 의해 "2 5 + 3 * 1 -"라는 우휘 표현으로
// 바뀌고, 이 과정에서 괄호가 제거된다. 이 후위 표현으로 연산을 실행해 보라. 그림에서 보듯
// 연산 규칙은 단순하다. "2 5 + 3 * 1 -"을 순차적으로 읽으면서 언제든 피연산자 들어오면
// 스택에 푸시한다. 단, 그림처럼 먼저 팝된 피연산자가 2항 연산자의 오른쪽에 있어야 한다.
// 스택 푸시 팝에 의해 이 연산을 수행하는 프로그램을 작성하라.
// 또, "(4 + 1) * (6 - 5) / ((3 - 2) * (7 + 7))"이라는 중위 표현을 후위 표현으로 바꾼
// "4 1 + 6 5 - * 3 2 - 7 7 + * /"을 입력하여 결과를 확인하라.
// 힌트 루프를 돌며 문자 단위로 읽되 '\n'이 들어오면 빠져나가고 ' '가 들어오면 countinue
// 로 계속한다. 숫자가 들어오면 ungetc를 써서 읽기 이전 상태로 되돌린다. 이후 %s로 읽은
// 다음 atoi를 써서 숫자로 변환하여 푸시한다. 그렇지 않은 경우 연산자에 따라 연산하고
// 그 결과를 푸시한다.
#include <stdio.h>
#include <stdlib.h>
// #include "15-Q2_stack.h"

// 15-Q2_stack.h file
#define MAX 10

struct stack {
    int top;
    int data[MAX];
};
typedef struct stack stackType;

// 15-Q2_stack.c file
void init(stackType* sp) {
    sp->top = -1;
}

int is_empty(stackType* sp) {
    return (sp->top == -1);
}

int is_full(stackType* sp) {
    return (sp->top == (MAX - 1));
}

void push(stackType* sp, const int item) {
    sp->data[++(sp->top)] = item;
}

int pop(stackType* sp) {
    return sp->data[(sp->top)--];
}

int main() {



    return 0;
}
