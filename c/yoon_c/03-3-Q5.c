/* 문제 03-1 [scanf 함수의 활용]
문제 5
입력 받은 세개의 정수 num1, num2, num3를 대상으로 다음 연산의 결과를 출력하는 프로
그램을 작성해보자.
  (num1 - num2) x (num2 + num3) x (num3 % num1)
*/
#include <stdio.h>

int main() {

    int num1, num2, num3;
    int result;

    printf("세 개의 정수 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    result = (num1 - num2) * (num2 + num3) * (num3 % num1);
    printf("(%d - %d) x (%d + %d) x (%d %% %d) = %d\n", num1, num2, num2, num3, num3, num1, result);

    return 0;
}
