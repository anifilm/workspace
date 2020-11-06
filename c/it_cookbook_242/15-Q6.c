// 06 스택과 반대되는 개념이 큐(Queue)다. 이는 선입선출(FIFO: First In First Out) 구조로서
// 먼저 들어온 것이 먼저 나가는 구조다. 식당 앞에 서 있는 줄이라면 당연히 먼저 줄을 선 사람이
// 먼저 서비스를 받아야 한다. 큐 구조로 구현할 수도 있지만 두 개의 스택을 써도 큐 구조를 구현
// 할 수 있다. 예를 들어 stackType S1, S2가 있다고 가정해 보자. a, b, c순으로 입력이 들어올
// 때, 그것을 S1에 푸시하면 아래에서 위로 가면서 a, b, c가 쌓인다. 그 경우 S1에서 차례차례
// 팝을 가해 S2에 푸시하면 S2는 아래에서 위로 가면서 c, b, a가 쌓인다. 이제 S2에 팝을 가하면
// 서 출력하면 그 출력은 입력 순인 a, b, c가 된다. 이렇게 되면 S2가 큐의 역할을 한다.
// 화면에 STACK이라는 단어를 입력한다고 가정해 보자. 실수로 ST A 다음의 문자르 V로 입력했
// 다면 백스페이스(<bs>)를 누르고 다시 C를 입력할 것이다. 사용자가 KY<bs>OTW<bs><bs>REA
// 순서로 입력할 경우 스택은 문자가 들어오면 푸시를 해야 하지만 <bs>가 들어오면 팝을 해서 직전
// 의 문자를 제거해야 한다. 최종적으로 화면에 보여주어야 하는 문자열은 입력 순서대로여야 하므로
// 두 개의 스택을 써서 큐 구조로 가져가야 한다. 문자형 입력과 <bs>가 들어올 때 최종적으로
// 화면에 보여야 할 문자열을 출력하는 프로그램을 작성해 보라. 단, 입력에서 직접 백스페이스를
// 치면 운영체제가 가로채 처리하므로 백스페이스 대신 '*'문자를 친다고 가정하라.
// > Enter a string.
// > undk*o usc**ndo tri***redo redo ([Enter])
// > undo undo redo redo
#include <stdio.h>
#include <stdlib.h>
// #include "15-Q6_stack.h"

// 15-Q6_stack.h file
#define MAX 20

struct stack {
    int top;
    int data[MAX];
};
typedef struct stack stackType;

// 15-Q6_stack.c file
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
    stackType mystack2;

    printf("Enter a string.\n");
    init(&mystack);
    init(&mystack2);
    while ((ch = getchar()) != '\n') {
        if (ch == '*') {
            if (is_empty(&mystack)) {
                printf("Stack empty.\n");
                exit(1);
            } else
                pop(&mystack);
        } else
            push(&mystack, ch);
    }

    while (!is_empty(&mystack))
        push(&mystack2, pop(&mystack));

    while (!is_empty(&mystack2))
        printf("%c", pop(&mystack2));
    printf("\n");

    return 0;
}
