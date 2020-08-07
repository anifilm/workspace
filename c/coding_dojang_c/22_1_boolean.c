#include <stdio.h>
#include <stdbool.h>        // bool, true, false가 정의된 헤더 파일

int main() {

    bool b1 = true;

    if (b1 == true)                 // b1이 true인지 검사
        printf("b1 is true\n");     // b1이 true이므로 true 출력
    else
        printf("b1 is false\n");

    return 0;
}
