// 04 입력된 문장을 배열에 저장한 후 단어 사이의 빈칸이 여럿이면 그것을 하나의 빈칸으로 바꾸어
// 출력하는 프로그램을 작성해 보라.
// > Enter a sentence.
// > Today's      weather   forecast    says it's partly    cloudy. ([Enter])
// > Today's weather forecast says it's partly cloudy.
#include <stdio.h>

int main() {

    char ch[100] = {0};
    int i;

    printf("Enter a sentence.\n");
    gets(ch);

    for (i = 0; ; i++) {
        if (ch[i] == '\0')
            break;
        else if (ch[i] == ' ' && ch[i + 1] == ' ') {
            continue;
        } else {
            printf("%c", ch[i]);
        }
    }

    return 0;
}
