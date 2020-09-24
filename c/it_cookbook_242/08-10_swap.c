#include <stdio.h>

void swap(int m, int n) {
    int temp;
    printf("Before swap, m = %d and n = %d\n", m, n);
    temp = m;
    m = n;
    n = temp;
    printf("After swap, m = %d and n = %d\n", m, n);
    return;
}

int main() {

    int a = 10, b = 20;
    printf("Before calling function, a = %d and b = %d\n", a, b);
    swap(a, b);
    printf("After calling function, a = %d and b = %d\n", a, b);

    return 0;
}
