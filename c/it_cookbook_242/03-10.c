#include <stdio.h>

int main() {

    int a = 105;    // a = 0110 1001 (0x69)
    int b = 85;     // b = 0101 0101 (0x55)

    printf("%x\n", a & b);  // 0100 0001 (0x41)
    printf("%x\n", a | b);  // 0111 1101 (0x7d)
    printf("%x\n", a ^ b);  // 0011 1100 (0x3c)
    printf("%x\n", ~a);     // 1001 0110 (0xffffff96)

	return 0;
}

/*

비트 연산자          의미

    &           bitwise AND
    |           bitwise OR
    ^           bitwise XOR
    ~           bitwise NOT
    <<          bitwise LEFT SHIFT
    >>          bitwise RIGHT SHIFT

*/
