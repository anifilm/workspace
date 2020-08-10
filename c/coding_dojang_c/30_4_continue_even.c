#include <stdio.h>

int main() {

    int count;

    scanf("%d", &count);    // 값을 입력받음

    for (int i = 1; i <= count; i++) {  // 1부터 증가하면서 count보다 작거나 같을 때까지 반복
        if (i % 2 != 0)                 // i를 2로 나누어 나머지가 0이 아니면 (홀수이면)
            continue;                   // 아래 코드를 실행하지 않고 처음으로 되돌아감

        printf("%d\n", i);
    }

    return 0;
}
