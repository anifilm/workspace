#include <stdio.h>
#include <stdbool.h>        // bool, true, false가 정의된 헤더 파일

int main() {

    printf("int의 크기: %d byte\n", sizeof(int));      // int의 크기: 4byte -> 32bit
    printf("bool의 크기: %d byte\n", sizeof(bool));    // bool의 크기: 1byte -> 8bit

    return 0;
}
