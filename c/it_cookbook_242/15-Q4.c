// 04 위 프로그램은 MAX를 10으로 규정하고 있기 때문에 여는 괄호가 열 개보다 많을 경우에
// 루프 내부에서 Stack full 메시지를 내보내고 프로그램이 끝나버린다. 이는 루프를 빠져나와
// 스택이 비었는지를 비교하기도 전의 일이다. 이 문제를 해결하려면 배열 버전 대신 포인터
// 버전을 써서 여는 괄호가 들어올 때마다 동적으로 새로운 노드를 만들어야 한다. 예제에서
// 작성한 포인터 버전의 스택을 사용하여 위 main 프로그램을 포인터 버전으로 수정하라.
// 힌트 is_full()이 없는 대신 free_list()를 사용해야 한다.
#include <stdio.h>
#include <stdlib.h>
// #include "15-Q4_stack.h"

// 15-Q4_stack.h file
struct node {
    char data;
    struct node* next;
};
typedef struct node nodeType;

// 15-Q4_stack.c file
void init(nodeType** top) {
    *top = NULL;
}

int is_empty(nodeType** top) {
    return (*top == NULL);
}

void push(nodeType** top, const char item) {
    nodeType* temp = (nodeType*)malloc(sizeof(nodeType));
    if (temp == NULL) {
        printf("No more memory.\n");
        exit(1);
    }
    temp->data = item;
    temp->next = *top;
    *top = temp;
}

char pop(nodeType** top) {
    nodeType* temp;
    char item;
    if (is_empty(top)) {
        printf("Stack empty.\n");
        exit(1);
    }
    temp = *top;
    item = temp->data;
    *top = (*top)->next;
    free(temp);
    return item;
}

void free_list(nodeType** top) {
    nodeType* temp = *top;
    while (temp != NULL) {
        *top = (*top)->next;
        free(temp);
        temp = *top;
    }
}

int main() {

    char ch;
    nodeType* mystack;

    printf("Enter an expression.\n");
    init(&mystack);                     // 스택 초기화
    while ((ch = getchar()) != '\n') {  // getchar()기 '\n'이 아닐 때까지
        if (ch == '(') {
            /* 스택을 동적을 확장하기 때문에 is_full은 필요없어 주석 처리 */
            // if (is_full(&mystack)) {    // 스택이 꽉 찼으면
            //     printf("Stack full.\n");
            //     exit(1);
            // } else
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

    free_list(&mystack);
    return 0;
}

/*
TODO:
닫는 괄호가 하나 더 많은 경우 "Illegal expression"을 출력하지 않고
"Stack empty"를 출력하는 문제를 수정할 필요가 있음
*/
