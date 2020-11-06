// 리턴값이 없는 함수
#include <stdio.h>

void add_one(int* p) {
    (*p) += 1;
}

int main() {

    int a = 1;

    printf("Before: %d\n", a);

    add_one(&a);
    printf("After: %d\n", a);

    return 0;
}
