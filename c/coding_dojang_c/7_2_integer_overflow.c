#include <stdio.h>

int main() {

    char num1 = 128;            // char 에 저장 할 수 있는 최대값 127보다 큰수를 할당
                                // 오버플로우 발생
    unsigned char num2 = 256;   // unsigned char 에 저장할 수 있는 최대값 255보다 큰수를 할당
                                // 오버플로우 발생

    printf("%d\n", num1);       // -128
    printf("%u\n", num2);       // 0
                                // 저장할 수 있는 범위를 넘어사므로 최소값 으로 넘어감

    return 0;
}
