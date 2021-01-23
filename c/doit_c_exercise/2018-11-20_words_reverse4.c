// 문자열에서 단어를 역순으로 배열하기 (C, 4)
#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 128
#define MAX_WORD_COUNT 64
#define MAX_WORD_LENGTH 16

void InputUserString(char* ap_user_string, unsigned int a_max_length) {
    printf("문자열 입력: ");
    while (scanf_s("%[^\n]s", ap_user_string, a_max_length - 1) == 0) {
        printf("문자열이 제대로 입력되지 않았습니다.\n");
        rewind(stdin);
        printf("문자열을 다시 입력: ");
    }
}

int GetWordCount(char* ap_str) {
    // 반복횟수를 기억할 변수 선언
    int count = 0;
    // 단어가 몇 개인지 알려면 문자열에 포함된 공백 문자의 개수를 계산하면 된다.
    while (*ap_str) {
        if (*ap_str == ' ')
            count++;  // 단어 개수 증가시킴
        ap_str++;
    }
    // 문자열이 공백 문자로 끝나지 않았다면 마지막 단어는 개수에
    // 포함되지 않았기 때문에 단어의 개수를 하나 더 증가시킴
    if (*(ap_str - 1) != ' ')
        count++;
    return count;
}

void CopyWord(char** ap_word, char* ap_str, int a_word_len) {
    char* p_temp_word;
    // 먼저 단어를 저장할 메모리를 할당하는데 단어를 구성하는 문자가
    // word_len개라도 NULL 문자를 함께 저장해야 하기 때문에
    // 저장할 메모리 크기를 (word_len + 1)만큼 할당한다.
    *ap_word = (char*)malloc(a_word_len + 1);
    // Displacement Addressing을 사용하기 위해 주소를 새로운 포인터로 옮긴다.
    p_temp_word = *ap_word;

    // 할당된 메모리에 현재 단어를 복사
    for (int i = 0; i < a_word_len; i++)
        *p_temp_word = *ap_str++;
    // 단어 끝에 NULL 문자를 추가
    *p_temp_word = 0;
}

int main() {

    char** p_word_list;
    char str[MAX_LENGTH];
    int word_count, word_len = 0, i, word_index = 0;

    // 사용자에게 문자열을 입력 받는다.
    InputUserString(str, MAX_LENGTH);
    word_count = GetWordCount(str);
    p_word_list = (char**)malloc(sizeof(char*)*word_count);

    // 사용자가 입력한 문자열에서 공백 문자를 구분자로 단어를 분리
    for (i = 0; word_index < word_count; i++) {
        if (str[i] == ' ' || str[i] == 0) {
            // 공백 문자나 'NULL 문자'를 만나면 단어를 완성하는 작업을 해야 한다.
            CopyWord(p_word_list + word_index, str + i - word_len, word_len);
            word_index++;
            word_len = 0;   // 다음 단어를 구성하기 위해 길이를 초기화
        } else {
            word_len++;  // 현재 단어의 길이를 증가시킴
        }
    }

    // p_word_list에 저장된 단어를 거꾸로 출력
    printf("단어를 거꾸로 나열하기: ");
    for (i = word_count - 1; i >= 0; i--) {
        printf("%s ", *(p_word_list + i));
    }
    printf("\n");

    // 메모리 해제
    for (i = 0; i < word_count; i++)
        free(*(p_word_list + i));
    free(p_word_list);

    return 0;
}
