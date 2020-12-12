// 구조체 변수의 주소 값과 첫 번째 멤버의 주소 값
#include <stdio.h>

struct point {
    int xpos;
    int ypos;
};

struct person {
    char name[20];
    char phoneNum[20];
    int age;
};

int main() {

    struct point pos = {10, 20};
    struct person man = {"임채영", "010-8731-2354", 43};

    printf("%p %p\n", &pos, &pos.xpos);
    printf("%p %p\n", &man, man.name);

    return 0;
}

/*

구조체 변수의 주소 값은 구조체 변수의 첫 번째 멤버의 주소 값과 동일하다.

*/
