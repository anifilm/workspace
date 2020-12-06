// char형 배열의 문자열 저장과 '널(null)' 문자
#include <stdio.h>

int main() {

    char str[] = "Good morning!";

    printf("배열 str의 크기: %d\n", (int)sizeof(str));
    printf("널 문자 문자형 출력: %c\n", str[13]);
    printf("널 문자 정수형 출력: %d\n", str[13]);   // null 문자 아스키 코드값: 0
    printf("\n");

    str[12] = '?';  // 배열 str에 저장된 문자열 데이터는 변경 가능
    printf("문자열 출력: %s\n", str);

    return 0;
}
