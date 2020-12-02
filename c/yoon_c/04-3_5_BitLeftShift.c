// << 연산자: 비트의 왼쪽 이동 (Shift)
#include <stdio.h>

int main() {

    int num = 15;      // 0000 0000 0000 0000 0000 0000 0000 1111

    int result1 = num << 1;   // num의 비트 열을 왼쪽으로 1칸 이동
    int result2 = num << 2;   // num의 비트 열을 왼쪽으로 2칸 이동
    int result3 = num << 3;   // num의 비트 열을 왼쪽으로 3칸 이동

    printf("1칸 이동 결과: %d\n", result1);     //  30: 0001 1110
    printf("2칸 이동 결과: %d\n", result2);     //  60: 0011 1100
    printf("3칸 이동 결과: %d\n", result3);     // 120: 0111 1000

    return 0;
}
