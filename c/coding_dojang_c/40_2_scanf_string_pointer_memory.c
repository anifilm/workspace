#include <stdio.h>
#include <stdlib.h>

int main() {

    char *s1 = malloc(sizeof(char) * 10);       // char 10개 크기만큼 동적 메모리 할당

    printf("문자열을 입력하세요 [10]: ");
    scanf("%s", s1);       // 표준 입력을 받아서 메모리가 할당된 문자열 포인터에 저장

    printf("s1: %s\n", s1);     // 입력된 문자열의 내용을 출력

    free(s1);       // 동적 메모리 해제

    return 0;
}
