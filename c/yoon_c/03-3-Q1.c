/* 문제 03-1 [scanf 함수의 활용]
문제 1
프로그램 사용자로부터 두 개의 정수를 입력 받아서 두 수의 뺄셈과 곱셈의 결과를 출력하는
프로그램을 작성해보자.
*/
#include <stdio.h>

int main() {

    int num1, num2;

    printf("정수 one: ");
    scanf("%d", &num1);
    printf("정수 two: ");
    scanf("%d", &num2);

    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d x %d = %d\n", num1, num2, num1 * num2);

    return 0;
}
