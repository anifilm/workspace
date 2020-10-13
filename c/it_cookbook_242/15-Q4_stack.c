#include "15-Q4_stack.h"

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
