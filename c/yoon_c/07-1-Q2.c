/* 문제 07-1 [while문의 활용]
문제 2
프로그램 사용자로부터 양의 정수를 하나 입력 받은 다음, 그 수만큼 3의 배수를 출력하는
프로그램을 작성해 보자. 예를 들어 5를 입력 받았다면, 3 6 9 12 15를 출력해야 한다.
*/
#include <stdio.h>

int main() {

    int num, i = 1;

    printf("정수를 입력: ");
    scanf("%d", &num);

    while (i <= num) {
        printf("%d ", 3 * i);
        i++;
    }
    printf("\n");

    return 0;
}
