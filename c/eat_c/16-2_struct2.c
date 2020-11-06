// 구조체의 대입 2
#include <stdio.h>

void copy_str(char* dest, const char* src);

struct Test {
  int i;
  char str[20];
};

int main() {
    struct Test st1, st2;

    st2.i = 3;
    copy_str(st2.str, "Hello, world!");

    st1 = st2;      // 구조체 복사
    printf("st1.i  : %d\n", st1.i);
    printf("st1.str: %s\n", st1.str);

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
