// 문자, 문자열 검색 strchr(), strstr()
#include <stdio.h>
#include <string.h>

int main() {

    char str[20] = "abcde 12345";

    // 찾은 문자의 위치 포인터를 저장
    char* p = strchr(str, 'e');

    if (p) printf("%s\n", p);

    return 0;
}
