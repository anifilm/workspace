#include <stdio.h>

int increment(int m) {
    m++;
    printf("Inside function, m is %d\n", m);
    return m;   // return 으로 값을 넘겨 준다
}

int main() {

    int a = 10;
    printf("Before calling function, a is %d\n", a);
    a = increment(a);
    printf("After calling function, a is %d\n", a);

    return 0;
}
