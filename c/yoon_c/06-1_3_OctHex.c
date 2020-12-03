// 정수 출력을 위한 서식문자들: %d, %u, %o, %x
#include <stdio.h>

int main() {

    int num1 = 8, num2 = 12;

    printf("%d %o %#o \n", num1, num1, num1);   //  8진수 정수 출력, %#o -> 012 ( 8진수 표현방식으로 출력)
    printf("%d %x %#x \n", num2, num2, num2);   // 16진수 정수 출력, %#x -> 0xf (16진수 표현방식으로 출력)

    return 0;
}
