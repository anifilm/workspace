// int형 변수에 저장된 값을 1바이트 단위로 출력하기
#include <stdio.h>

int main() {

    int data = 0x12345678, i;
    char* p = (char*)&data;

    for (i = 0; i < 4; i++) {
        printf("%x, ", *(p + i));
    }

    return 0;
}
