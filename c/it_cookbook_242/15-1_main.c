#include <stdio.h>
#include <stdlib.h>
#include "15-1_stack.h"

int main() {

    int num, dividend, remainder;
    stackType mystack;

    printf("Enter a positive number.\n");
    scanf("%d", &num);

    init(&mystack);
    while (1) {
        dividend = num / 2;
        remainder = num % 2;

        if (dividend < 2) {                 // 몫이 2보다 작으면
            push(&mystack, remainder);      // 나머지를 먼저 푸시
            push(&mystack, dividend);       // 몫을 푸시
            break;
        }
        if (is_full(&mystack)) {
            printf("stack full error.\n");
            exit(1);
        } else {                            // 몫이 2보다 크면
            push(&mystack, remainder);      // 나머지만 푸시
            num /= 2;                       // num을 변경
        }
    }
    while (!is_empty(&mystack))
        printf("%d", pop(&mystack));
    printf("\n");

    return 0;
}
