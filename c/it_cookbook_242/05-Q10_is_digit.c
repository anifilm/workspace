/* 10
세 개의 문자로 이루어진 단어를 입력받아 그 중 숫자를 나타내는 문자는 몇 개인지 출력하는 프로그램을 작성하라.
단, 아래 함수를 작성하고 호출하여 ch가 숫자를 나타내는지 판정하라.
  int is_digit(int ch);

  > Enter a 3-letter word.
  > k16 ([Enter])
  > Digit appears 2 times.
*/
#include <stdio.h>

int is_digit(int ch) {
    if (ch >= '0' && ch <= '9')
        return 1;
    else
        return 0;
}

int main() {

    char c1, c2, c3, result = 0;

    printf("Enter a 3-letter word.\n");
    scanf("%c%c%c", &c1, &c2, &c3);

    result += is_digit(c1);
    result += is_digit(c2);
    result += is_digit(c3);
    printf("Digit appears %d times.\n", result);

    return 0;
}
