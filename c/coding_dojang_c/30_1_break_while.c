#include <stdio.h>

int main() {

    int num = 0;

    while (1) {     // 무한 루프
        num++;      // num을 1씩 증가시킴
        printf("%d\n", num);

        if (num == 100)     // num이 100일때
            break;          // 반복문을 끝냄. while의 제어 흐름을 벗어남
    }

    return 0;
}
