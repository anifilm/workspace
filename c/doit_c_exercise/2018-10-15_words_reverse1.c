// 문자열에서 단어를 역순으로 배열하기 (C, 1)
#include <stdio.h>
#define MAX_LENGTH 128
#define MAX_WORD_COUNT 64
#define MAX_WORD_LENGTH 16

int main() {

    char word_list[MAX_WORD_COUNT][MAX_WORD_LENGTH];
    char str[MAX_LENGTH];
    int i, word_count = 0, word_len = 0;

    printf("문자열 입력: ");
    while (scanf_s("%[^\n]s", str, MAX_LENGTH - 1) == 0) {
        printf("문자열이 제대로 입력되지 않았습니다.\n");
        rewind(stdin);
        printf("문자열을 다시 입력: ");
    }

    // 사용자가 입력한 문자열에서 공백 문자를 구분자로 단어를 분리
    for (i = 0; str[i] != 0 && word_count < MAX_WORD_COUNT; i++) {
        if (str[i] == ' ') {
            // 공백 문자를 만나면 하나의 단어를 완성하기 위해
            // 구성중인 문자열의 끝에 'NULL 문자'를 추가한다.
            word_list[word_count][word_len] = 0;
            word_count++;
            word_len = 0;   // 다음 단어를 구성하기 위해 길이를 초기화
        } else {
            // 문자열의 길이는 최대 16자
            if (word_len < MAX_WORD_LENGTH - 1) {
                word_list[word_count][word_len] = str[i];
                word_len++;
            }
        }
    }
    // word_len값을 체크하여 마지막 단어를 word_list에 추가
    if (word_len > 0) {
        word_list[word_count][word_len] = 0;
        word_count++;
    }

    // word_list에 저장된 단어를 거꾸로 출력
    printf("단어를 거꾸로 나열하기: ");
    for (i = word_count - 1; i >= 0; i--) {
        printf("%s ", word_list[i]);
    }
    printf("\n");

    return 0;
}
