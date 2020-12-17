// 문자열 자르기
#include <stdio.h>
#include <string.h>

int main() {

    char str1[20] = "abcde 12345";
    char str2[20] = {0};

    // 문자열 str1의 str1[6]부터 끝까지 str2에 복사
    strcpy(str2, str1 + 6);

    printf("%s\n", str2);

    return 0;
}
