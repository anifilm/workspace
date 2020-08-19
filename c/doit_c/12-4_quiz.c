// 1분 퀴즈
// 12-4 data 배열에 다음처럼 "Hello"라는 문자열이 저장되어 있습니다.
// strcpy 함수와 strcat 함수를 사용해서 "Hello world!"를 출력해 보세요.
#include <stdio.h>
#include <string.h>

int main() {

    char data[10] = {'H', 'e', 'l', 'l', 'o', 0,};
    char result[16];

    strcpy(result, data);
    strcat(result, " world!");

    printf("%s\n", result);

	return 0;
}
