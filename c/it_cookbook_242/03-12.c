#include <stdio.h>

int main() {

    unsigned int a = 25;    // 0001 1001 (0x19)
    unsigned left, right;

    left = a << 3;          // 1100 1000 (0xc8)
    right = a >> 3;         // 0000 0011 (0x03)

    printf("left shift: %x, right shift: %x\n", left, right);

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
