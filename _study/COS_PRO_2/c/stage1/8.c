#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool solution(char* sentence) {
    char *str = (char *)malloc(sizeof(char) * 103);
    int len = 0;
    for(int i = 0; i < strlen(sentence); i++){
        char ch = sentence[i];
        if(ch != ' ' && ch != '.') str[len++] = ch;
    }
    for(int i = 0; i < len / 2; i++){
        if(str[i] != str[len - 1 - i]) return false;
    }
    return true;
}

int main() {
    char sentence1[19] = "never odd or even.";
    bool ret1 = solution(sentence1);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret1 == true ? "true" : "false");

    char sentence2[19] = "palindrome";
    bool ret2 = solution(sentence2);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret2 == true ? "true" : "false");
}
