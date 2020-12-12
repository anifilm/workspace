// 구조체 vs. 공용체
#include <stdio.h>

typedef struct sbox {   // 구조체 sbox의 정의
    int mem1;
    int mem2;
    double mem3;
} SBox;

typedef union ubox {    // 공용체 ubox의 정의
    int mem1;
    int mem2;
    double mem3;
} UBox;

int main() {

    SBox sbx;
    UBox ubx;

    printf("%p %p %p\n", &sbx.mem1, &sbx.mem2, &sbx.mem3);
    printf("%p %p %p\n", &ubx.mem1, &ubx.mem2, &ubx.mem3);

    printf("%d\n", (int)sizeof(SBox));  // 16 출력
    printf("%d\n", (int)sizeof(UBox));  // 8 출력

    return 0;
}
