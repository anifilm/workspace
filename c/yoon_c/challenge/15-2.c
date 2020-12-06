/* 도전! 프로그래밍 2
도전 2
프로그램 사용자로부터 10진수 형태로 정수를 하나 입력 받은 다음, 이를 2진수로 변환해서
출력하는 프로그램을 작성해 보자.

[실행의 예]
10진수 정수 입력: 12
1100

[도전2의 해결을 위한 GUIDE]
10진수를 2진수로 변환하는 방법을 모른다면, 먼저 그 방법부터 공부해야 한다. 그런데
대부분의 경우 변환 방법을 모르는 것이 아니라, 중학교 실저에 공부한 내용이라서 잘
기억이 나지 않는 것이다.
*/
#include <stdio.h>

void PrintBinary(int num) {
    int i, arr[32];
    while (num != 0) {
        arr[i] = num % 2;
        num = num / 2;
        i++;
    }
    // 바이너리 출력 (역순)
    for (i -= 1 ; i >= 0; i--)
        printf("%d", arr[i]);
    printf("\n");
}

int main() {

    int num;

    printf("10진수 정수 입력: ");
    scanf("%d", &num);

    PrintBinary(num);

    return 0;
}
