// 구조체 변수의 초기화
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

    printf("%d %d\n", pos.xpos, pos.ypos);
    printf("%s %s %d\n", man.name, man.phoneNum, man.age);

    return 0;
}
