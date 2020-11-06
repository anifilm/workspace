#include <stdio.h>
#include <stdlib.h>

int* get_number() {
    int* p;
    p = (int*)malloc(sizeof(int));
    if (p != NULL)
        *p = 20;
    return p;
}

int main() {

    int* ptr;

    ptr = get_number();
    printf("*ptr is %d\n", *ptr);

    free(ptr);
    ptr = NULL;

    return 0;
}
