// 입력 형태를 다양하게 지정할 수 있다.
#include <stdio.h>

int main() {

    int num1, num2, num3;
    int result;

    printf("세 개의 정수 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    result = num1 + num2 + num3;
    printf("%d + %d + %d = %d\n", num1, num2, num3, result);

    return 0;
}
