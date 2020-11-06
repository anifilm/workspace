// 03 표현식 ((ch = getchar()) != 'q' && ((a == b) && (c != d)))에서 여는 괄호와 닫는
// 괄호의 수는 같아야 한다. 추상 자료형 스택을 이용하여 여는 괄호와 닫는 괄호의 수가 같은지
// 확인하여 같으며 "legal", 다르면 "illegal"이라고 출력하는 프로그램을 완성하라.
// 힌트 배열 버전 스택의 stack.h와 stack.c에서 push, pop의 자료형을 char로 정의한다. 입력
// 에서 여는 괄호가 나오면 push, 닫는 괄호가 나오면 pop을 계속하되 루프를 빠져나와 is_empty
// 함수를 호출한다. 비어 있으면 여는 괄호와 다는 괄호 수가 일치한 것이므로 legal을 출력한다.
#include <stdio.h>
#include <stdlib.h>
// #include "15-Q3_stack.h"

// 15-Q3_stack.h file
#define MAX 10

struct stack {
    int top;
    int data[MAX];
};
typedef struct stack stackType;

// 15-Q3_stack.c file
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

    char ch;
    stackType mystack;

    printf("Enter an expression.\n");
    init(&mystack);                     // 스택 초기화
    while ((ch = getchar()) != '\n') {  // getchar()기 '\n'이 아닐 때까지
        if (ch == '(') {
            if (is_full(&mystack)) {    // 스택이 꽉 찼으면
                printf("Stack full.\n");
                exit(1);
            } else
                push(&mystack, ch);     // 스택 푸시
        }
        if (ch == ')') {
            if (is_empty(&mystack)) {   // 스택이 비었으면
                printf("Stack empty.\n");
                exit(1);
            } else
                pop(&mystack);          // 스택 팝
        }
    }
    is_empty(&mystack) ? printf("Legal expression.\n") : printf("Illegal expression.\n");

    return 0;
}

/*
TODO:
닫는 괄호가 하나 더 많은 경우 "Illegal expression"을 출력하지 않고
"Stack empty"를 출력하는 문제를 수정할 필요가 있음
*/
