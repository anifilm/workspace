#include <stdio.h>

int main() {

    for (int i = 1; i <= 100; i++) {    // 1부터 100까지 증가하면서 100번 반복
        if (i % 2 != 0)                 // i를 2로 나누어 나머지가 0이 아니면 (홀수이면)
            continue;                   // 아래 코드를 실행하지 않고 처음으로 되돌아감

        printf("%d\n", i);  // 결과 -> 짝수만 출력함
    }

    return 0;
}
