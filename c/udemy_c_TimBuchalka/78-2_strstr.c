// Section 10 : 78. Searching, Tokenizing, and Analyzing Strings
#include <stdio.h>
#include <string.h>

int main() {

    char text[] = "Every dog has his day";
    char word[] = "dog";

    char *pFound = NULL;
    pFound = strstr(text, word);    // text 문자열에서 "dog" 문자열부터 이후를 반환

    printf("%s\n", pFound);

    return 0;
}
