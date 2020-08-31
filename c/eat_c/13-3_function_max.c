// 함수 포인터
#include <stdio.h>

int max(int a, int b);

int main() {

    int a, b;
    int (*pmax)(int, int);
    pmax = max;

    scanf("%d %d", &a, &b);
    printf("max(a,b): %d\n", max(a, b));
    printf("pmax(a,b): %d\n", pmax(a, b));

    return 0;
}

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;

    return 0;
}
