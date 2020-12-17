// 유용한 문자열 함수들
#include <stdio.h>
#include <string.h>

int main() {

    char str[20] = "abcDEF123";

    // 문자열 소문자로 변경
    strlwr(str);
    printf("%s\n", str);

    return 0;
}
