// 문자열에서 단어를 역순으로 배열하기 (C, 5)
#include <stdio.h>
#define MAX_LENGTH 128

void InputUserString(char* ap_user_string, unsigned int a_max_length) {
    printf("문자열 입력: ");
    while (scanf_s("%[^\n]s", ap_user_string, a_max_length - 1) == 0) {
        printf("문자열이 제대로 입력되지 않았습니다.\n");
        rewind(stdin);
        printf("문자열을 다시 입력: ");
    }
}

int main() {

    char str[MAX_LENGTH];

    // 사용자에게 문자열을 입력 받는다.
    InputUserString(str, MAX_LENGTH);

    return 0;
}
