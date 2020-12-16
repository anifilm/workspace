// #define: Object-like macro (오브젝트 유사 매크로)
#include <stdio.h>

#define NAME        "홍길동"
#define AGE         24
#define PRINT_ADDR  puts("주소: 경기도 용인시\n");

int main() {

    printf("이름: %s\n", NAME);
    printf("나이: %d\n", AGE);
    PRINT_ADDR;

    return 0;
}
