/* 문제 03-1 [scanf 함수의 활용]
문제 4
입력 받은 두 정수를 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로그램을 작성
해보자. 예를 들어서 7과 2가 입력되면 몫으로 3, 나머지로 1이 출력되어야 한다.
*/
#include <stdio.h>

int main() {

    int num1, num2;

    printf("정수 one: ");
    scanf("%d", &num1);
    printf("정수 two: ");
    scanf("%d", &num2);

    printf("%d ÷ %d의 몫 = %d\n", num1, num2, num1 / num2);
    printf("%d ÷ %d의 나머지 = %d\n", num1, num2, num1 % num2);

    return 0;
}
