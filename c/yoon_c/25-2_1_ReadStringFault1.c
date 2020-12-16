// 전역변수와 지역변수로 해결이 되지 않는 상황
#include <stdio.h>

char* ReadUserName() {
    char name[30];
    printf("What's your name? ");
    gets(name);
    return name;    // 지역변수의 주소 값을 반환하지만 곧 소멸됨
}

int main() {

    char* name1;
    char* name2;

    name1 = ReadUserName(); // 제대로 반환값을 전달 받지 못한다.
    printf("name1: %s\n", name1);
    name2 = ReadUserName();
    printf("name2: %s\n", name2);

    return 0;
}
