/* 01
다음 중첩 루프의 실행 결과를 예측해 보고 실제 실행 결과를 출력하여 비교하라.
*/
#include <stdio.h>

int main() {

    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 3; j >= 1; j--)
            printf("%d %d\n", i, j);
    }

    return 0;
}

/*
실행 결과 예측

0 3
0 2
0 1
1 3
1 2
1 1
2 3
2 2
2 1

*/
