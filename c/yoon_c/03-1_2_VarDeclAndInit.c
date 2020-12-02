// 변수의 다양한 선언 및 초기화 방법
#include <stdio.h>

int main() {

    int num1, num2;     // 변수 num1, num2의 선언 (초기화 이전)
    int num3 = 30, num4 = 40;   // 변수 num3, num4의 선언 및 초기화

    printf("num1: %d, num2: %d\n", num1, num2); // 쓰레기 값 출력

    num1 = 10;  // 변수 num1의 초기화
    num2 = 20;  // 변수 num2의 초기화

    printf("num1: %d, num2: %d\n", num1, num2);
    printf("num3: %d, num4: %d\n", num3, num4);

    return 0;
}
