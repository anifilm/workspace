/* 문제 26-1 [매크로의 정의]
문제 3
두 값의 크기를 비교하여 큰 값을 반환하는 매크로 함수 MAX를 정의해 보자. 참고로 이는
조건 연산자를 이용해서 정의하는 것이 바람직하다.
*/
#include <stdio.h>

#define MAX(X, Y)  (X > Y) ? X : Y

int main() {

    int num1, num2;

    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);

    printf("%d가(이) 더 큰 수 입니다.\n", MAX(num1, num2));

    return 0;
}
