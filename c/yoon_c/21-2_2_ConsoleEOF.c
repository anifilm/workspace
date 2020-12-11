#include <stdio.h>

int main() {

    int ch;

    while (1) {
        ch = getchar();
        if (ch == EOF)
            break;
        putchar(ch);
    }

    return 0;
}

/*

문자 입출력에서의 EOF
 - 함수 호출의 실패시
 - Windows:  Ctrl + z
 - Linux  :  Ctrl + d 키가 입력되는 경우

키보드 입력에 '파일의 끝'이라는 것이 있을 수 없기 때문에 EOF의 반환 시기를
별도의 키 입력 (Ctrl + z)으로 설정되어 있다.


반환형이 int인 이유?

함수의 반환값 중 EOF는 -1로 정의된 상수이기 때문

*/
