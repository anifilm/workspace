#include <stdio.h>

int main() {

    unsigned char n1 = 0x0F;
    unsigned char n2 = 0x3C;

    printf("AND(&): %x\n", n1&n2);
    printf("OR(|): %x\n", n1|n2);
    printf("XOR(^): %x\n", n1^n2);
    printf("NOT(~): %x\n", ~n1);
	
	return 0;
}
