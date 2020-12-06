/* 문제 11-2 [배열 기반의 문자열 표현]
문제 3
프로그램 사용자로부터 영단어를 입력 받는다. 그리고 나서 입력 받은 영단어를 구성하는
문자 중에서 아스키 코드의 값이 가장 큰 문자를 찾아서 출력하는 프로그램을 작성해 보자.
예를 들어서 입력된 영단어가 "LOVE"라면 이 중에서 아스키 코드 값이 가장 큰 문자는 V
이므로 V가 출력되어야 한다.
*/
#include <stdio.h>

int main() {

    char str[20], bigchr;
    int len = 0;

    printf("영단어를 입력: ");
    scanf("%s", str);

    bigchr = str[0];
    while (str[len] != '\0') {
        if (str[len] > bigchr) bigchr = str[len];
        len++;
    }

    printf("\n입력된 영단어: %s\n", str);
    printf("가장 큰 문자: %c\n", bigchr);

    return 0;
}
