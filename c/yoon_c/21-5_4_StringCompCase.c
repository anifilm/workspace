#include <stdio.h>
#include <string.h>

int main() {

    char str1[20];
    char str2[20];

    printf("문자열 입력 1: ");
    scanf("%s", str1);

    printf("문자열 입력 2: ");
    scanf("%s", str2);

    printf("\nstrcmp: %d ", strcmp(str1, str2));
    if (strcmp(str1, str2) > 0)
        printf("(str1 > str2)");
    else if (strcmp(str1, str2) < 0)
        printf("(str1 < str2)");
    printf("\n");

    if (!strcmp(str1, str2)) {
        puts("두 문자열은 완벽히 동일합니다.");
    }
    else {
        puts("두 문자열은 동일하지 않습니다.");
        if (!strncmp(str1, str2, 3))
            puts("그러나 앞 세 글자는 동일합니다.");
    }

    return 0;
}

/*

문자열을 비교하는 함수들: strcmp, strncmp

int strcmp(const char* s1, const char* s2);
int strncmp(const char* s2, const char* s2, size_t n);
    -> 두 문자열의 내용이 같으면 0, 같지 않으면 0이 아닌 값을 반환

 - s1 == s2인 경우 0 반환
 - s1 > s2인 경우  1 반환 (양수)
 - s2 < s2인 경우 -1 반환 (음수)

*/
