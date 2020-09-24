#include <stdio.h>

void call_by_value(int p) {
    p += 1;
}

void call_by_reference(int *p) {
    *p += 1;
}

int main() {

    int num;

    num = 500;
    printf("Before call_by_value, num is %d\n", num);
    call_by_value(num);
    printf("After call_by_value, num is %d\n", num);
    printf("\n");

    num = 500;
    printf("Before call_by_reference, num is %d\n", num);
    call_by_reference(&num);
    printf("After call_by_reference, num is %d\n", num);

    return 0;
}
