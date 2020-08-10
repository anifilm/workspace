#include <stdio.h>

int main() {

    int count;

    scanf("%d", &count);    // 값을 입력받음

    int i = 1;

    while (1) {             // 무한 루프
        printf("%d\n", i);

        if (i == count)     // i가 입력받은 값과 같으면
            break;          // 반복문을 끝냄

        i++;
    }

    return 0;
}
