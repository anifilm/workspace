/* 문제 11-1 [1차원 배열의 활용]
문제 2
char형 1차원 배열을 선언과 동시에 다음 문장의 내용으로 초기화하고, 초기화 이후에는
저장된 내용을 출력하는 예제를 작성해 보자.
  "Good time"

참고로 C언어는 배열 기반의 문자열 저장 및 출력에 대한 별도의 기준을 제공하고 있다.
그리고 이와 관련해서 이어서 설명을 한다. 하지만 이 문제는 지금까지 우리가 공부한 내용
의 범위 내에서 해결해야 한다.
*/
#include <stdio.h>

int main() {

    char str[] = {'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e', '\0'};
    int strLen = sizeof(str) / sizeof(char);
    int i;

    for (i = 0; i < strLen; i++)
        printf("%c", str[i]);
    printf("\n");

    printf("strings: %s, str length: %d\n", str, strLen);

    return 0;
}
