// 문자열에서 단어를 역순으로 배열하기 (C, 2)
#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 128
#define MAX_WORD_COUNT 64
#define MAX_WORD_LENGTH 16

int main() {

    char* p_word_list[MAX_WORD_COUNT];
    char str[MAX_LENGTH];
    int i, sub_i, word_count = 0, word_len = 0;

    printf("문자열 입력: ");
    while (scanf_s("%[^\n]s", str, MAX_LENGTH - 1) == 0) {
        printf("문자열이 제대로 입력되지 않았습니다.\n");
        rewind(stdin);
        printf("문자열을 다시 입력: ");
    }

    // 사용자가 입력한 문자열에서 공백 문자를 구분자로 단어를 분리
    for (i = 0; str[i] != 0 && word_count < MAX_WORD_COUNT; i++) {
        if (str[i] == ' ') {
            // 공백 문자를 만나면 단어를 완성하는 작업을 해야 한다.
            // 먼저 단어를 저장할 메모리를 할당하는데 단어를 구성하는 문자가
            // word_len개라도 NULL 문자를 함께 저장해야 하기 때문에
            // 저장할 메모리 크기를 (word_len + 1)만큼 할당한다.
            p_word_list[word_count] = (char*)malloc(word_len + 1);

            // 할당된 메모리에 현재 단어를 복사
            for (sub_i = 0; sub_i < word_len; sub_i++) {
            //  p_word_list[word_count][sub_i] = str[i - word_len + sub_i];
                *(p_word_list[word_count] + sub_i) = str[i - word_len + sub_i];
            }
            // 단어 끝에 NULL 문자를 추가
        //  p_word_list[word_count][sub_i] = 0;
            *(p_word_list[word_count] + sub_i) = 0;
            word_count++;
            word_len = 0;   // 다음 단어를 구성하기 위해 길이를 초기화
        } else {
            word_len++;  // 현재 단어의 길이를 증가시킴
        }
    }
    // word_len값을 체크하여 마지막 단어를 word_list에 추가
    if (word_len > 0) {
        p_word_list[word_count] = (char*)malloc(word_len + 1);
        // 마지막 단어를 할당된 메모리에 복사
        for (sub_i = 0; sub_i < word_len; sub_i++) {
        //  p_word_list[word_count][sub_i] = str[i - word_len + sub_i];
            *(p_word_list[word_count] + sub_i) = str[i - word_len + sub_i];
        }
        // 단어 끝에 NULL 문자를 추가
    //  p_word_list[word_count][sub_i] = 0;
        *(p_word_list[word_count] + sub_i) = 0;
        word_count++;
    }

    // p_word_list에 저장된 단어를 거꾸로 출력
    printf("단어를 거꾸로 나열하기: ");
    for (i = word_count - 1; i >= 0; i--) {
        printf("%s ", p_word_list[i]);
    }
    printf("\n");

    // 메모리 해제
    for (i = 0; i < word_count; i++)
        free(*(p_word_list + i));

    return 0;
}
