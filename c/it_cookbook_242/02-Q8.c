/* 08
scanf를 써서 영문 이름 이니셜(Initial)을 입력받고 다시 printf를 써서 그것을 화면에 출력하는 프로그램을 작성하라.
힌트 문자형 변수를 선언하여 활용한다.
  > JYP ([Enter])
  > Initials of your name are J, Y, anf P.
*/
#include <stdio.h>

int main() {

    char ch1, ch2, ch3;

    scanf("%c%c%c", &ch1, &ch2, &ch3);

    printf("Initials of your name are %c, %c, anf %c.\n", ch1, ch2, ch3);

    return 0;
}
