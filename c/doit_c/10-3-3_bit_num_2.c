#include <stdio.h>

unsigned char GetBit(unsigned char dest_data, unsigned char bit_num) {

    unsigned char bit_state = 0;

    if (bit_num < 8) {
        bit_state = dest_data & (0x01 << bit_num);
        bit_state = bit_state >> bit_num;
    }

    return bit_state;
}

int main() {

    unsigned char lamp_state = 0x75;
    unsigned char bit_state;
    int i;

    printf("%X -> ", lamp_state);

    for (i = 0; i < 8; i++) {
        bit_state = GetBit(lamp_state, 7 - i);
        printf("%d", bit_state);
    }
    printf("\n");
	
	return 0;
}
