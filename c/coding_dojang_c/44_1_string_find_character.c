#include <stdio.h>
#include <string.h>     // strchr 함수가 선언된 헤더 파일

int main() {

    char s1[30] = "A Garden Diary";     // 크기가 30인 char형 배열을 선언하고 문자열 할당

    char *ptr = strchr(s1, 'A');        // 'A'로 시작하는 문자열 검색, 포인터 반환

    while (ptr != NULL) {
        printf("%s\n", ptr);            // 검색된 문자열 출력
        ptr = strchr(ptr + 1, 'a');     // 포인터에 1을 더하여 a 다음부터 검색
    }

    return 0;
}
