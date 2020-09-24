// 06 아래 함수를 호출하여 입력 문장을 거꾸로 출력하는 프로그램을 작성하라.
// 힌트 재귀 호출을 써 볼 수 있다. 일단 마지막 문자를 찍은 다음에 문자열의 마지막 인덱스를
// 하나씩 줄여가며 재귀 호출을 한다. 그 경우 베이스 케이스는 인덱스가 -1일 때다.
// void reverse(char s[], int last);
#include <stdio.h>

void reverse(char s[], int last) {
    if (last == -1)
        return;
    else {
        printf("%c", s[last]);
        reverse(s, last - 1);
    }
}

int main() {

    char ch[100];
    int i, count;

    printf("Enter a string.\n");
    scanf("%s", ch);

    for (i = 0; ; i++) {
        if (ch[i] == '\0') {
            count = i;
            break;
        }
    }
    reverse(ch, count);
    printf("\n");

    return 0;
}
