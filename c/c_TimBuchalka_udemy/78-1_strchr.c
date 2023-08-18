// Section 10 : 78. Searching, Tokenizing, and Analyzing Strings
#include <stdio.h>
#include <string.h>

int main() {

    char str[] = "The quick brown fox";
    char ch = 'q';

    char *pGot_char = NULL;
    pGot_char = strchr(str, ch);    // str 문자열에서 'q' 문자부터 이후를 반환

    printf("%s\n", pGot_char);

    return 0;
}
