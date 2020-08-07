#include <stdio.h>

int main() {

    printf("%d\n", !1);    // 0: NOT 1 -> 0 (false)
    printf("%d\n", !0);    // 1: NOT 0 -> 1 (true)
    printf("%d\n", !3);    // 0: NOT 3 -> 0 (false)

    return 0;
}
