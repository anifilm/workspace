#include <stdio.h>
#include <stdlib.h>
#include <string.h>     // strtok 함수가 선언된 헤더 파일

int main() {

    char *s1 = malloc(sizeof(char) * 30);   // char 30개 크기만큼 동적 메모리 할당

    strcpy(s1, "The Little Prince");        // s1에 문자열 복사

    char *ptr = strtok(s1, " ");        // 동적 메모리에 들어있는 문자열은 자를수 있다

    while (ptr != NULL) {
        printf("%s\n", ptr);            // 검색된 문자열 출력
        ptr = strtok(NULL, " ");        // 다음 문자열을 잘라서 포인터를 반환
    }

    return 0;
}
