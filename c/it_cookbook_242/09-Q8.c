// 08 두 문자열이 순서만 다를 뿐 동일한 문자로 구성되어 있을 때 서로를 애너그램(Anagram, 어구전철)
// 이라고 부른다. 예를 들어 creative와 reactive는 애너그램이다. 문장을 입력받아 그것이 서로
// 애너그램인지 판별하는 프로그램을 작성하라. 단, 입력은 모두 소문자이며 빈칸은 무시하기로 한다.
// 힌트 각각의 문자열을 배열 A, B에 넣고 2중 루프에 의해 배열 A의 문자가 배열 B에 있는지 확인한다.
// 같은 문자가 있으면 B의 문자를 '*'로 치환한다. B의 모든 요소가 '*'로 바뀌어 있으면 애너그램이다.
// 단, 빈칸이 있으면 continue에 의해 루프를 계속해야 한다.
// > Enter the first string.
// > ave maria, gratia plena, dominus tecum ([Enter])
// > Enter the second string.
// > virgo serena, pia, munda et immaculata ([Enter])
// > Yes, they are anagrams.
#include <stdio.h>
#define true 1
#define false 0

int main() {

    char a[100], b[100];
    int i, j, count, is_anagram;

    printf("Enter the first string.\n");
    gets(a);

    printf("Enter the second string.\n");
    gets(b);

    for (i = 0; i < 100; i++) {
        if (a[i] == '\0') {
            count = i - 1;
            break;
        }
        for (j = 0; j < 100; j++) {
            if (b[j] == '\0')
                break;
            else if (a[i] == b[j]) b[j] = '*';
        }
    }

    for (i = 0; i < count; i++) {
        if (b[i] != '\0') {     // b 문자열이 짧은 경우
            is_anagram = true;
            break;
        } else if (b[i] != '*') {
            is_anagram = false;
            break;
        } else
            is_anagram = true;
    }

    if (is_anagram)
        printf("Yes, they are anagrams.\n");
    else
        printf("No, they are NOT anagrams.\n");
    printf("\n");

    return 0;
}
