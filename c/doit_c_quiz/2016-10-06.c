// [Quiz] 조건문 줄이기
#include <stdio.h>
#include <string.h>

int main() {

    char *p_str_table[5] = {"abc", "def", "ghi", "jkl", "mno"};
    char find_string[32];
    int i;

    printf("찾고 싶은 문자열을 입력하세요: ");
    scanf("%s", find_string);

    // for (i = 0; i < 5; i++) {
    for (i = 4; i > 0; i--) {
        if (strcmp(find_string,  p_str_table[i]) == 0)
            break;
    }

    // if (i == 5) strcpy(find_string, p_str_table[0]);
    strcpy(find_string, p_str_table[i]);
    printf("%s를 사용합니다.\n", find_string);

    return 0;
}
