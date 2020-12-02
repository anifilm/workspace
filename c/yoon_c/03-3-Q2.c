/* 문제 03-1 [scanf 함수의 활용]
문제 2
프로그램 사용자로부터 세 개의 정수 num1, num2, num3를 순대로 입력 받은 후에, 다음
연산의 결과를 출력하는 프로그램을 작성해보자.
  num1 X num2 + num3
단, 입력 받은 세 개의 정수가 2, 4, 6이라면 다음의 형태로 출력을 해야 한다.
  2 x 4 + 6 = 14
*/
#include <stdio.h>

int main() {

    int num1, num2, num3;
    int result;

    printf("세 개의 정수 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    result = num1 * num2 + num3;
    printf("%d x %d + %d = %d\n", num1, num2, num3, result);

    return 0;
}
