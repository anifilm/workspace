#include <stdio.h>

int main() {

    char ch;

    ch = 'a';

    printf("sizeof(ch) is %d byte\n", sizeof(ch));
    printf("sizeof('a') is %d byte\n", sizeof('a'));
    printf("\n");

    printf("'a' in character format is %c\n", ch);
    printf("'a' in decimal format is %d\n", ch);
    printf("\n");

    ch = 'a' + 1;
    printf("'a' + 1 in character format is %c\n", ch);

    ch = 97;
    printf("97 in character format is %c\n", ch);

	return 0;
}

/*

문자 변수 ch에 저장된 값은 1바이트 정수,
문자 상수 'a'는 4바이트 이다.

*/
