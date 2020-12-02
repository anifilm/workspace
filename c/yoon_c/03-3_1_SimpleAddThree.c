// 키보드로부터의 정수입력을 위한 scanf 함수의 호출
#include <stdio.h>

int main() {

    int num1, num2;
    int result;

    printf("정수 one: ");
    scanf("%d", &num1);	    // 첫 번째 정수 입력
    printf("정수 two: ");
    scanf("%d", &num2);	    // 두 번째 정수 입력

    result = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, result);

    return 0;
}
