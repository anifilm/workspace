#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[]) {
    int len = strlen(str);
    str[len - 1] = 0;
}

int main() {

    char str[100];

    printf("문자열 입력: ");
    fgets(str, sizeof(str), stdin);

    printf("길이: %d, 내용: %s\n", strlen(str), str);

    RemoveBSN(str);
    printf("길이: %d, 내용: %s\n", strlen(str), str);

    return 0;
}

/*

문자열 길이를 반환하는 함수: strlen

size_t strlen(const char* s);
    -> 전달된 문자열의 길이를 반환하되, 널 문자는 길이에 포함하지 않는다.

*/
