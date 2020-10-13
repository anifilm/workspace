#include <stdio.h>
#include <stdlib.h>
#include "15-3_stack.h"

void init(nodeType **top) {
    *top = NULL;
}

int is_empty(nodeType **top) {
    return (*top == NULL);
}

void push(nodeType **top, const char item) {
    nodeType *temp = (nodeType *)malloc(sizeof(nodeType));
    if (temp == NULL) {
        printf("No more memory.\n");
        exit(1);
    }
    temp->data = item;
    temp->next = *top;
    *top = temp;
}

char pop(nodeType **top) {
    nodeType *temp;
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

void free_list(nodeType **top) {
    nodeType *temp = *top;
    while (temp != NULL) {
        *top = (*top)->next;
        free(temp);
        temp = *top;
    }
}

int main() {

    nodeType *original, *copy, *reverse;
    char ch;
    int palindrome;

    init(&original);
    init(&copy);
    init(&reverse);

    printf("Enter a sentence.\n");
    while ((ch = getchar()) != '\n') {
        push(&original, ch);
        push(&copy, ch);
    }

    while (!is_empty(&copy))
        push(&reverse, pop(&copy));

    palindrome = 1;
    while (!is_empty(&original)) {
        if (pop(&original) != pop(&reverse)) {
            palindrome = 0;
            break;
        }
    }
    palindrome == 1 ? printf("It is a palindrome.\n") : printf("It is NOT a palindrome.\n");

    free_list(&original);
    free_list(&copy);
    free_list(&reverse);

    return 0;
}
