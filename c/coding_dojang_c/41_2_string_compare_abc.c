#include <stdio.h>
#include <string.h>     // strcmp 함수가 선언된 헤더 파일

int main() {

    // aaa는 ASCII 코드로 97 97 97
    // aab는 ASCII 코드로 97 97 98
    // aac는 ASCII 코드로 97 97 99

    printf("strcmp(\"aaa\", \"aaa\"): %d\n", strcmp("aaa", "aaa"));     // aaa와 aaa는 같으므로 0
    printf("strcmp(\"aab\", \"aaa\"): %d\n", strcmp("aab", "aaa"));     // aab와 aaa중에 aab가 크므로 1
    printf("strcmp(\"aab\", \"aac\"): %d\n", strcmp("aab", "aac"));     // aab와 aac중에 aac가 크므로 -1

    return 0;
}
