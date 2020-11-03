// 인라인 함수 2
#include <stdio.h>

__inline int max(int a, int b) {
    /*
    if (a > b)
        return a;
    else
        return b;
    */
    return ( a > b ) ? a : b;
}

int main() {

    printf("3과 2 중 최대값은: %d\n", max(3, 2));

    return 0;
}
