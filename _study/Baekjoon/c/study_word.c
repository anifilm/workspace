/*
1157번 단어 공부

문제
알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.

입력
첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.

출력
첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.

예제 입력 1
Mississipi
예제 출력 1
?

예제 입력 2
zZa
예제 출력 2
Z

예제 입력 3
z
예제 출력 3
Z

예제 입력 4
baaa
예제 출력 4
A

주의! 테스트 케이스에 공백하나가 입력된 경우를 확인 할 것!

*/
#include <stdio.h>
#define MAX_STRLEN 1000001

int main() {
    char str[MAX_STRLEN];
    int i, alphabet[26] = {0,};
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;   // 대문자로 변경
        alphabet[str[i]-65]++;
    }
    int max = 0; char max_alpha = 0;
    for (i = 0; i < 26; i++) {
        if (alphabet[i] > max) {
            max = alphabet[i];
            max_alpha = i;
        }
        else if (max == alphabet[i])
            max_alpha = '?';
    }
    if (max_alpha == '?')
        printf("%c", max_alpha);
    else
        printf("%c", max_alpha + 65);
    return 0;
}
