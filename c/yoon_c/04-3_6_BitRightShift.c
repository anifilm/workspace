// >> 연산자: 비트의 오른쪽 이동 (Shift)
#include <stdio.h>

int main() {

    int num = -16;          // 1111 1111 1111 1111 1111 1111 1111 0000

    printf("2칸 오른쪽 이동의 결과: %d \n", num >> 2); // -4: 1111 1100
    printf("3칸 오른쪽 이동의 결과: %d \n", num >> 3); // -2: 1111 1110

    return 0;
}
