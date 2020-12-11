/* 문제 21-1 [getchar 함수와 putchar 함수의 활용]
프로그램 사용자로부터 알파벳 문자를 하나 입력 받아서, 입력 받은 문자가 대문자면 이를
소문자로 변환해서 출력해주고, 입력 받은 문자가 소문자면 이를 대문자로 변환해서 출력
해주는 프로그램을 작성해보자. 단, 문자의 입출력에는 getchar() 함수와 putchar() 함수를
사용하기로 하자. 그리고 프로그램 사용자가 알파벳 이외의 문자를 입력하는 경우에는 그에
따른 오류 메시지를 간단히 출력하기로 하자.
*/
#include <stdio.h>
#include <ctype.h>

int main() {

    int ch;

    printf("알파벳 문자를 입력하세요. (Ctrl + z 입력시 종료)\n");
    while ((ch = getchar()) != EOF) {
        if (ch >= 'A' && ch <= 'Z')
            putchar(tolower(ch));
        else if (ch >= 'a' && ch <= 'z')
            putchar(toupper(ch));
        else
            printf("알파벳 문자를 입력하세요. (Ctrl + z 입력시 종료)");
        putchar('\n');

        // 입력 버퍼를 지우는 다양한 방법
        while (getchar() != '\n');
    //  fflush(stdin);
    //  rewind(stdin);
    }

    return 0;
}
