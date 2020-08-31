// 함수 포인터
#include <stdio.h>

int max(int a, int b);
int donothing(int c, int k);

int main() {

    int a, b;
    int (*pfunc)(int, int);
    pfunc = max;

    scanf("%d %d", &a, &b);
    printf("max(a,b): %d\n", max(a, b));
    printf("pfunc(a,b): %d\n", pfunc(a, b));

    pfunc = donothing;

    printf("donothing(1,1): %d\n", donothing(1, 1));
    printf("pfunc(1,1): %d\n", pfunc(1, 1));

    return 0;
}

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;

    return 0;
}

int donothing(int c, int k) { return 1; }
