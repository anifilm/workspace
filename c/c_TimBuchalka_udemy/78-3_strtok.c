// Section 10 : 78. Searching, Tokenizing, and Analyzing Strings
#include <stdio.h>
#include <string.h>

int main() {

    char str[80] = "Hello - how are you - my name is - jason";
    const char s[2] = "-";
    char *token;

    // Get the first token
    token = strtok(str, s);     // 문자 "-" 를 기준으로 문자열을 잘라 이전 부분을 반환

    // Walk through other tokens
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }

    return 0;
}
