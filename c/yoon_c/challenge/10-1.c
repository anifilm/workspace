/* 도전! 프로그래밍 1
도전 1
10진수 정수를 입력 받아서 16진수로 출력하는 프로그램을 작성해보자. 이는 서식문자의
활용에 대한 문제이므로 쉽게 해결할 수 있을 것이다.
*/
#include <stdio.h>

int main() {

    int num;

    printf("정수를 입력: ");
    scanf("%d", &num);

    printf("\n10진수 정수 %d의 16진수는 0x%02x\n", num, num);

    return 0;
}
