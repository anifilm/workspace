#include <stdio.h>

void main() {

    char input_string[10];
    // 반환값이 NULL이 아니라면 문자열을 입력 받아서 input_string에 저장함
    if (NULL != gets(input_string)) {
        printf("input: %s\n", input_string);    // 입력 받은 문자열을 출력함
    } else {
        printf("input -> Canceled\n");
    }
}
