/* 문제 11-2 [배열 기반의 문자열 표현]
문제 1
프로그램 사용자로부터 하나의 영단어를 입력 받아서 입력 받은 영단어의 길이를 계산하여
출력하는 프로그램을 작성해 보자. 예를 들어서 "Array"라는 단어가 입력되면 5가 출력
되어야 한다.
*/
#include <stdio.h>

int main() {

    char str[20];
    int len = 0;

    printf("영단어를 입력: ");
    scanf("%s", str);

    while (str[len] != '\0')
        len++;

    printf("\n입력된 영단어: %s\n", str);
    printf("단어의 길이: %d\n", len);

    return 0;
}
