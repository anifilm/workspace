#include <stdio.h>

int main() {

    int *p, *q, arr[2][3] = {1, 2, 3, 4, 5, 6};

    printf("arr is %p\n", arr);
    printf("arr + 1 is %p\n", arr + 1);
    printf("&arr is %p\n", &arr);
    printf("&arr + 1 is %p\n", &arr + 1);
    printf("\n");

    printf("arr[0] is %p\n", arr[0]);
    printf("arr[0] + 1 is %p\n", arr[0] + 1);
    printf("&arr[0] is %p\n", &arr[0]);
    printf("&arr[0] + 1 is %p\n", &arr[0] + 1);
    printf("\n");

    p = arr;
    printf("p is %p, p + 1 is %p\n", p, p + 1);

    q = arr[0];
    printf("q is %p, q + 1 is %p\n", q, q + 1);
    printf("(q + 1)[2] is %d\n", (q + 1)[2]);
    printf("\n");

    return 0;
}
