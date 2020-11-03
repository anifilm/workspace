// 여러가지 typedef 예제들
#include <stdio.h>

int add(int a, int b);
typedef int CAL_TYPE;
typedef int (*Padd)(int, int);
typedef int Arrays[10];

int main() {

    CAL_TYPE a = 10;
    Arrays arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    Padd ptr = add;

    printf("a : %d \n", a);
    printf("arr[3] : %d \n", arr[3]);
    printf("add(3, 5) : %d \n", ptr(3, 5));

    return 0;
}

int add(int a, int b) {
    return a + b;
}
