/*
1152번 단어의 개수

문제
영어 대소문자와 띄어쓰기만으로 이루어진 문자열이 주어진다. 이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오. 단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.

입력
첫 줄에 영어 대소문자와 띄어쓰기로 이루어진 문자열이 주어진다. 이 문자열의 길이는 1,000,000을 넘지 않는다. 단어는 띄어쓰기 한 개로 구분되며, 공백이 연속해서 나오는 경우는 없다. 또한 문자열의 앞과 뒤에는 공백이 있을 수도 있다.

출력
첫째 줄에 단어의 개수를 출력한다.

예제 입력 1
The Curious Case of Benjamin Button
예제 출력 1
6

예제 입력 2
 Mazatneunde Wae Teullyeoyo
예제 출력 2
3

예제 입력 3
Teullinika Teullyeotzi
예제 출력 3
2

주의! 테스트 케이스에 공백하나가 입력된 경우 1이 되지 않도록 할 것!

*/
#include <stdio.h>
#define MAX_STRLEN 1000001

int main() {
    char str[MAX_STRLEN];
    int word_count = 0, word_len = 0;
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (word_len > 0 && str[i] == ' ') {
            word_count++;
            word_len = 0;
        } else if (str[i] >= 'A') {
            word_len++;
        }
    }
    if (word_len > 0) {
        word_count++;
    }
    printf("%d", word_count);
    return 0;
}
