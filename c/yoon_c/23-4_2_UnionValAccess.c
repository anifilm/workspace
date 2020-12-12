// 구조체 vs. 공용체
#include <stdio.h>

typedef union ubox {    // 공용체 ubox의 정의
    int mem1;
    int mem2;
    double mem3;
} UBox;

int main() {

    UBox ubx;   // 8바이트 메모리 할당

    ubx.mem1 = 20;
    printf("%d\n", ubx.mem1);   // 20
    printf("%d\n", ubx.mem2);   // 20 (같은 int형이기 때문에 공유된 값을 출력)
    printf("%g\n", ubx.mem3);   // 값을 알수없다
    printf("\n");

    ubx.mem3 = 7.15;
    printf("%d\n", ubx.mem1);   // 값을 알수없다
    printf("%d\n", ubx.mem2);   // 값을 알수없다
    printf("%g\n", ubx.mem3);   // 7.15

    return 0;
}
