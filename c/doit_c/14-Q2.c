// Q2 사용자에게 두 개의 문자열을 입력 받은 후에 strcat 함수를 사용하여 두 문자열을 합칩니다.
// 그리고 합친 문자열을 출력하는 프로그램을 작성하세요. 예를 들어 "abc"와 "def"를 입력 받으면
// "abcdef"라고 출력해야 합니다.
// 문자열 입력은 fgets 함수를 사용하세요. 문자열 중간에 [Enter]가 포함되어서는 안 됩니다.
#include <stdio.h>
#include <string.h>

int main() {

    char first_string[10], second_string[10];

    printf("첫번째 문자열 입력: ");
    fgets(first_string, 10, stdin);
    first_string[strlen(first_string) - 1] = '\0';  // 문자열 마지막의 개행문자 제거

    printf("두번째 문자열 입력: ");
    fgets(second_string, 10, stdin);

    strcat(first_string, second_string);

    printf("%s\n", first_string);

    return 0;
}
