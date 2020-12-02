// 8진수와 16진수를 이용한 데이터 표현
#include <stdio.h>

int main() {

    int num1 = 0xA7, num2 = 0x43;  // 16진수
    int num3 = 032, num4 = 024;    //  8진수

    printf("0xA7의 10진수 정수 값: %d\n", num1);
    printf("0x43의 10진수 정수 값: %d\n", num2);
    printf(" 032의 10진수 정수 값: %d\n", num3);
    printf(" 024의 10진수 정수 값: %d\n", num4);

    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d + %d = %d\n", num3, num4, num3 + num4);

    return 0;
}
