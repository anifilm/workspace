// 구조체 예제 2
#include <stdio.h>

void copy_str(char* dest, const char* src);

struct Books {
    char name[30];      // 책 이름
    char auth[30];      // 저자 이름
    char publ[30];      // 출판사 이름
    int borrowed;       // 빌려 졌는지 유무
};

int main() {

    struct Books harry_potter;

    copy_str(harry_potter.name, "Harry Potter");
    copy_str(harry_potter.auth, "J.K Rolling");
    copy_str(harry_potter.publ, "Scholastic");
    harry_potter.borrowed = 0;

    printf("책 이름    : %s\n", harry_potter.name);
    printf("저자 이름  : %s\n", harry_potter.auth);
    printf("출판사 이름: %s\n", harry_potter.publ);

    return 0;
}

void copy_str(char* dest, const char* src) {
    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}
