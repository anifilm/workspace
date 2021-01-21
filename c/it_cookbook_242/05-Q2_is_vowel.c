/* 02
아래 함수를 호출하되 알파벳 소문자 하나를 입력받아 그것이 자음이면 Consonant라고 출력하고 모음이면 Vowel이라고
출력하는 프로그램을 작성하라. 입출력 형식은 자유로이 할 수 있다.
  int is_vowel(char c);

*/
#include <stdio.h>

int is_vowel(char c) {
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1;
            break;
        default:
            return 0;
            break;
    }
}

int main() {

    char ch;

    printf("알파벳 소문자를 입력하세요: ");
    scanf("%c", &ch);

    if (is_vowel(ch) == 1)
        printf("%c is vowel.\n", ch);
    else
        printf("%c is consonant.\n", ch);

    return 0;
}
