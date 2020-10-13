#include "15-Q3_stack.h"

void init(stackType *sp) {
    sp->top = -1;
}

int is_empty(stackType *sp) {
    return (sp->top == -1);
}

int is_full(stackType *sp) {
    return (sp->top == (MAX - 1));
}

void push(stackType *sp, const int item) {
    sp->data[++(sp->top)] = item;
}

int pop(stackType *sp) {
    return sp->data[(sp->top)--];
}
