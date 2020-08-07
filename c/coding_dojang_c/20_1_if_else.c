#include <stdio.h>

int main() {

    int num1 = 5;
    int num2;

    if (num1)          // num1이 1... (true)이면
        num2 = 100;    // num2에 100을 할당
    else               // num1이 0 (false)이면
        num2 = 200;    // num2에 200을 할당

    printf("num2: %d\n", num2); // 100: num1이 5이므로 true, num2에는 100이 할당됨

    return 0;
}
