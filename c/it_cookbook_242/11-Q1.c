/* 01
다음 프로그램의 출력을 예측하고 실제로 프로그램을 실행하여 예측한 값이 맞는지 확인하라.
*/
#include <stdio.h>

void in_order(int m, int* n) {
    if (m > *n)
        return;
    else {
        m++;        // 3 > 4 > 5 > 6
        (*n)--;     // 7 > 6 > 5 > 4
        printf("%d %d\n", m, *n);   // 3 7 > 4 6 > 5 5 > 6 4
        in_order(m, n);
        printf("%d %d\n", m, *n);   // 6 4 > 5 4 > 4 4 > 3 4
    }
}

int main() {

    int m = 2, n = 8;
    in_order(m, &n);
    printf("%d %d\n", m, n);        // 2 4

    return 0;
}
