#include <stdio.h>

int power2(int num, int power) {
    __asm {
        mov eax, num;
        mov ecx, power;
        shl eax, cl;
    }
}

int main() {

    printf("3 times (2 to the 5) is %d\n", power2(3, 5));

    return 0;
}
