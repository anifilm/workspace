// Q2 int형으로 선언한 변수 data에 값 0x12345678이 저장되어 있습니다.
// data 변수에 직접 값을 대입하지 않고 short *형 포인토를 선언하여
// data 변수의 값을 0x12340412로 변경하는 코드를 작성하세요.
#include <stdio.h>

int main() {

    int data = 0x12345678;
    short* ptr = (short*)&data;
    *ptr = 0x0412;

    printf("0x%x\n", data);

    return 0;
}
