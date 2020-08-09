#include <stdio.h>

int main() {

    char c1;

    scanf("%c", &c1);   // 값을 입력받음

    switch (c1) {       // c1의 값에 따라 분기
    case 'a':           // 문자 a일 때
        printf("c1: a입니다.\n");
        break;
    case 'b':           // 문자 b일 때
        printf("c1: b입니다.\n");
        break;
    default:            // 아무 case에도 해당되지 않을 때
        printf("default\n");
        break;
    }

    return 0;
}
