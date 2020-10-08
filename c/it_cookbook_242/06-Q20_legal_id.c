// 20 새로운 아이디를 만들 때 규칙은 다음과 같다. 첫째, 알파벳 소문자로 시작해야 한다. 둘째, 반드시
// 숫자가 하나 이상 들어가야 한다. 셋째, 최대 8자리라야 한다. 입력 아이디가 이 규칙에 들어 맞는지를
// 판단하는 프로그램을 작성하라.
// 힌트 엔터 키를 만날 때까지 scanf로 한 글자씩 읽으면서 규칙을 적용하라.
// > Enter an identifier.
// > meat4U ([Enter])
// > It's a legal ID.
#include <stdio.h>

int main() {

    char ch;
    int state = 0, count = 0;

    printf("Enter an identifier.\n");
    while (ch != '\n') {
        scanf("%c", &ch);
        if (state == 0 && count == 0 && (ch >= 97 && ch <= 122)) {
            state = 1;
        }
        if (state == 1 && (ch >= 48 && ch <= 57)) {
            state = 2;
        }
        count++;
        // printf("%c state: %d %d\n", ch, state, count);
    }

    count--;
    if (count > 8)
        printf("You must under 8 character ID.\n");
    else if (state == 0)
        printf("Not first character is lower case.\n");
    else if (state == 1)
        printf("Not include numberic case.\n");
    else if (state >= 2 && count <= 8)
        printf("It's a legal ID.\n");

    return 0;
}
