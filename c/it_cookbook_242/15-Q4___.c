// 04 위 프로그램은 MAX를 10으로 규정하고 있기 때문에 여는 괄호가 열 개보다 많을 경우에
// 루프 내부에서 Stack full 메시지를 내보내고 프로그램이 끝나버린다. 이는 루프를 빠져나와
// 스택이 비었는지를 비교하기도 전의 일이다. 이 문제를 해결하려면 배열 버전 대신 포인터
// 버전을 써서 여는 괄호가 들어올 때마다 동적으로 새로운 노드를 만들어야 한다. 예제에서
// 작성한 포인터 버전의 스택을 사용하여 위 main 프로그램을 포인터 버전으로 수정하라.
// 힌트 is_full()이 없는 대신 free_list()를 사용해야 한다.
#include <stdio.h>
#include <stdlib.h>
#include "15-Q4_stack.h"

int main() {

    char ch;
    nodeType mystack;

    printf("Enter an expression.\n");
    init(&mystack);                     // 스택 초기화
    while (getchar() != '\n') {         // getchar()기 '\n'이 아닐 때까지
        if (ch == '(') {
            if (free_list(&mystack)) {    // 스택이 꽉 찼으면
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
