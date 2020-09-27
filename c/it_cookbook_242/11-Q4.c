// 04 입력 문장을 배열에 저장하고 해당 문장에 모음이 몇 번 나오는지를 출력하는 프로그램을 작성
// 하라. 문장은 소문자만으로 이루어져 있다고 가정한다. 단, 아래 함수를 호출해야 하며 이 함수는
// 포인터 산술 연산을 써서 구현해야 한다.
// int count_vowel(char *arr, int length);
#include <stdio.h>

int count_vowel(char *arr, int length) {
    int i, count = 0;
    for (i = 0; i < length; i++) {
        switch (*(arr + i)) {
            case 'a':
            case 'i':
            case 'u':
            case 'e':
            case 'o':
                count++;
                break;
            default:
                break;
        }
    }
    return count;
}

int main() {

    char ch, list[100];
    int i = 0;

    printf("Enter a string.\n");
    while ((ch = getchar()) != '\n') {
        list[i] = ch;
        i++;
    }

    printf("\ncount vowel: %d\n", count_vowel(list, i));

    return 0;
}
