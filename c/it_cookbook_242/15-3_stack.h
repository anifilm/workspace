#ifndef STACK_H
#define STACK_H

struct node {
    char data;
    struct node *next;
};
typedef struct node nodeType;

void init(nodeType **top);

int is_empty(nodeType **top);

void push(nodeType **top, const char item);

char pop(nodeType **top);

void free_list(nodeType **top);

#endif
