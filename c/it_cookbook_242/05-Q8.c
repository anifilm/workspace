/* 08
문자를 입력받아 그것이 알파벳인지 숫자인지 그 외의 경우인지 세 가지 경우로 구분하는 프로그램을 작성하라.
힌트 아스키코드 표에서 알파벳의 범위, 숫자의 범위를 참고하라. 숫자를 의미하는 문자(Digit) 라면
if (ch >= '0' && ch <= '9') 라고 할 수 있다.
  > Enter a character.
  > ; ([Enter])
  > It is neither an alphabet nor a digit.
*/
#include <stdio.h>

int main() {

    char ch;

    printf("Enter a character.\n");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
        printf("It is a digit.\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("It is an alphabet.\n");
    else
        printf("It is neither an alphabet nor a digit.\n");

    return 0;
}
