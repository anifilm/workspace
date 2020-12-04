/* 문제 07-1 [while문의 활용]
문제 4
프로그램 사용자로부터 입력 받은 숫자에 해당하는 구구단을 출력하되, 역순으로 출력하는
프로그램을 작성해보자.
*/
#include <stdio.h>

int main() {

    int dan, num = 9;

    printf("몇 단? ");
    scanf("%d", &dan);

    while (num > 0) {
        printf("%d x %d = %d\n", dan, num, dan * num);
        num--;
    }

    return 0;
}
