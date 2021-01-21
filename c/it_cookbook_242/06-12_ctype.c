#include <stdio.h>
#include <ctype.h>

int main() {

    char ch;

    printf("Enter a character: ");

    for (ch = getchar(); ch != EOF; ch = getchar()) {
        if (islower(ch))
            ch = toupper(ch);
        putchar(ch);
        putchar('\n');
        getchar();
        printf("Enter a character: ");
    }

    return 0;
}

/*

함수 원형            의미              리턴값
int isalpha(int)    알파벳인지 확인    1(true), 0(false)
int isdigit(int)    숫자인지 확인      1(true), 0(false)
int islower(int)    소문자인지 확인    1(true), 0(false)
int isupper(int)    대문자인지 확인    1(true), 0(false)
int toupper(int)    대문자로 변환      대문자의 아스키 값
int tolower(int)    소문자로 변환      소문자의 아스키 값

*/
