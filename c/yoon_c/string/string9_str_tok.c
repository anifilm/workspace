// 특정문자열을 기준으로 자르기 strtok()
#include <stdio.h>
#include <string.h>

int main() {

    char str[50] = "동해물과 백두산이 마르고 닳도록";

    // 공백을 기준으로 문자열 자르기
    char* p = strtok(str, " ");
    while (p) {
        printf("%s\n", p);
        p = strtok(NULL, " ");
    }

    return 0;
}
