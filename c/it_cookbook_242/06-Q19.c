// 19 입력 문장에서 영어 모음이 몇 번 나오는지를 판단하여 출력하는 프로그램을 작성해 보라.
// > Enter a sentence.
// > What a beautiful day. ([Enter])
// > Vowel appears 8 times.
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
    int count = 0;

    printf("Enter a sentence.\n");
    while (ch != '\n') {
        scanf("%c", &ch);
        if (is_vowel(ch) == 1)
            count++;
    }
    printf("\nVowel appears %d times.\n", count);

    return 0;
}
