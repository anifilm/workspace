#include <stdio.h>

int main() {

    int num = 10;
    int *ptr = &num;
    int **dptr = &ptr;

    printf("num is %d\n", num);
    printf("*ptr is %d\n", *ptr);
    printf("**dptr is %d\n", **dptr);

    return 0;
}
