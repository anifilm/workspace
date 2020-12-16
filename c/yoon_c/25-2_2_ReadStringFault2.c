// 전역변수와 지역변수로 해결이 되지 않는 상황
#include <stdio.h>

char name[30];

char* ReadUserName() {
    printf("What's your name? ");
    gets(name);
    return name;    // 전역변수의 주소 값을 반환
}

int main() {

    char* name1;
    char* name2;

    name1 = ReadUserName();
    printf("name1: %s\n", name1);
    name2 = ReadUserName();
    printf("name2: %s\n", name2);

    printf("name1: %s\n", name1);   // name1와
    printf("name2: %s\n", name2);   // name2가 같은 메모리 주소를 할당 받았다.

    return 0;
}
