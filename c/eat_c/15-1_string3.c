// 문자열 바꾸기
#include <stdio.h>

int main() {

    char word[] = {"long sentence"};

    printf("조작 이전: %s\n", word);

    word[0] = 'a';
    word[1] = 'b';
    word[2] = 'c';
    word[3] = 'd';

    printf("조작 이후: %s\n", word);

    return 0;
}
