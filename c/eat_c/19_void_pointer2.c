// 임의의 주소값 p로 부터 byte만큼 읽은 함수
#include <stdio.h>

void read_char(void* p, int byte);

int main() {

    int arr[1] = {0x12345678};

    printf("%x\n", arr[0]);
    read_char(arr, 4);

    return 0;
}

void read_char(void* p, int byte) {
    do {
        printf("%x\n", *(char*)p);
        byte--;
        p = (char*)p + 1;
    } while (p && byte);
}
