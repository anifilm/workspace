// 변수의 특정 비트를 0으로 만드는 예제
#include <stdio.h>

unsigned char ResetBit(unsigned char dest_data, unsigned char bit_num) {

    if (bit_num < 8) dest_data = dest_data & ~(0x01 << bit_num);
    return dest_data;
}

int main() {

    unsigned char lamp_state = 0x7F;
    printf("%X -> ", lamp_state);

    lamp_state = ResetBit(lamp_state, 3);
    printf("%x\n", lamp_state);

	return 0;
}
