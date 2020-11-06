// Section 12 : 96. void pointers
#include <stdio.h>

int main() {

    int i = 10;
    float f = 2.34;
    char ch = 'k';

    void* v_ptr;

    v_ptr = &i;
    printf("Value of i = %d\n", *(int*)v_ptr);

    v_ptr = &f;
    printf("Value of f = %.2f\n", *(float*)v_ptr);

    v_ptr = &ch;
    printf("Value of ch = %c\n", *(char*)v_ptr);

    return 0;
}
