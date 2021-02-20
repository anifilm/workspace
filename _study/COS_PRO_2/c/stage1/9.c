#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(char* characters) {
    char* result = (char*)malloc(sizeof(char)*strlen(characters));
    int result_len = 0;
    result[0] = characters[0];
    result_len++;
    for (int i = 1; i < strlen(characters); i++) {
        if (characters[i - 1] != characters[i]) {
            result[result_len] = characters[i];
            result_len++;
        }
    }
    result[result_len] = NULL;
    return result;
}

int main() {
    char* characters = "senteeeencccccceeee";
    char* ret = solution(characters);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret);
}
