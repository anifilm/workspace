#include <stdio.h>
#include <string.h>     // strtok 함수가 선언된 헤더 파일

int main() {

    char s1[30] = "The Little Prince";  // 크기가 30인 char형 배열을 선언하고 문자열 할당

    char *ptr = strtok(s1, " ");        // " " 공백 문자를 기준으로 문자열을 자름, 포인터 반환

    while (ptr != NULL) {
        printf("%s\n", ptr);            // 검색된 문자열 출력
        ptr = strtok(NULL, " ");        // 다음 문자열을 잘라서 포인터를 반환
    }

    return 0;
}
