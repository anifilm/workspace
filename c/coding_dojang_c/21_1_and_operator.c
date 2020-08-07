#include <stdio.h>

int main() {

    printf("%d\n", 1 && 1);    // 1: 1 AND 1 -> 1 (true)
    printf("%d\n", 1 && 0);    // 0: 1 AND 0 -> 0 (false)
    printf("%d\n", 0 && 1);    // 0: 0 AND 1 -> 0 (false)
    printf("%d\n", 0 && 0);    // 0: 0 AND 0 -> 0 (false)
    printf("%d\n", 2 && 3);    // 1: 2 AND 3 -> 1 (true)

    return 0;
}
