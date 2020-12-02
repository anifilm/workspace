/* 문제 03-1 [scanf 함수의 활용]
문제 3
하나의 정수를 입력 받아서, 그 수의 제곱의 결과를 출력하는 프로그램을 작성해보자.
예를 들어서 5가 입력되면 25가 출력되어야 한다.
*/
#include <stdio.h>

int main() {

    int num;

    printf("정수를 입력: ");
    scanf("%d", &num);

    printf("%d의 제곱은 %d\n", num, num * num);

    return 0;
}
